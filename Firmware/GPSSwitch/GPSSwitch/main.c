//----------------------------------------------------------------------------
// C main line
//----------------------------------------------------------------------------

#include <m8c.h>        // part specific constants and macros
#include "PSoCAPI.h"    // PSoC API definitions for all User Modules

#include "queue.h"

#define NO_FIX				0
#define FIX0				1
#define FIX1				2
#define FIX2				3

#define IDLE				0
#define	SENTENCE			1
#define SFIX				2

#define SoM					'$'
#define GGA_PREFIX			"GPGGA"

#define FIX_POSITION		5	// Six commas minus 1 due to parser structure
#define FIX_POSITION_MARK	','

typedef struct {
	BYTE fix_status;
	BYTE parse_status;
	BYTE idx;
} GPSStatus;

BOOL TX8_TX_Pending = FALSE;

GPSStatus gps1 = { NO_FIX, IDLE, 0 };
GPSStatus gps2 = { NO_FIX, IDLE, 0 };

Queue queue;

void parse(char c, GPSStatus* gps)
{
	// TODO: TODO add support for GPGSA sentence
	switch (gps->parse_status)
	{
		case IDLE:
			if (c == SoM) {
				gps->parse_status = SENTENCE;
				gps->idx = 0;
			}
			break;

		case SENTENCE:
			if ((gps->idx < (sizeof(GGA_PREFIX)-1)) && (c == GGA_PREFIX[gps->idx]))
				gps->idx++;
			else if (gps->idx == (sizeof (GGA_PREFIX)-1)) {
				gps->idx = 0;
				gps->parse_status = SFIX;
			}
			else
				gps->parse_status = IDLE;
			break;
		
		case SFIX:
			if ((gps->idx<FIX_POSITION) && (c == FIX_POSITION_MARK))
				gps->idx++;
			else if (gps->idx==FIX_POSITION) {
				gps->parse_status = IDLE;
				gps->fix_status = c - '0';
			}
			break;

		default :
			gps->parse_status = IDLE;
			break;
	}
}

void RX8_1_IRQ(void )
{
	static BYTE _bData;
	static BYTE _bStatus;
	
	_bStatus = RX8_1_bReadRxStatus();
	
	if ((_bStatus & RX8_1_RX_COMPLETE) && !(_bStatus & RX8_1_RX_ERROR))
	{
		_bData = RX8_1_bReadRxData();
		
		parse(_bData, &gps1);
		
		if (gps1.fix_status >= gps2.fix_status)	// Higher priority
			enqueue(&queue, _bData);
		else if ((gps1.fix_status == NO_FIX) && (gps2.fix_status == NO_FIX))	// Out GPS1 data if both GPSx are NOT FIXED
			enqueue(&queue, _bData);			
	}
}

void RX8_2_IRQ(void )
{
	static BYTE _bData;
	static BYTE _bStatus;
	
	_bStatus = RX8_2_bReadRxStatus();
	
	if ((_bStatus & RX8_2_RX_COMPLETE) && !(_bStatus & RX8_2_RX_ERROR))
	{
		_bData = RX8_2_bReadRxData();

		parse(_bData, &gps2);

		if (gps2.fix_status > gps1.fix_status)
			enqueue(&queue, _bData);
	}
}

void TX8_IRQ(void )
{
	TX8_TX_Pending = TRUE;
}

void main(void)
{
	BYTE _bData;
	
	initQueue(&queue);
	
	M8C_EnableGInt;
	
	TX8_EnableInt();
	TX8_Start(TX8_PARITY_NONE);
	
	RX8_1_EnableInt();
	RX8_1_Start(RX8_1_PARITY_NONE);

	RX8_2_EnableInt();
	RX8_2_Start(RX8_2_PARITY_NONE);
	
	TX8_CPutString("GPSSwitch\n\r");
	
	LED_FIX_Off();
	
	while (TRUE)
	{
		M8C_ClearWDT;
		
		if ( TX8_TX_Pending )
		{			
			if(dequeue(&queue, &_bData))
			{
				TX8_TX_Pending = FALSE;
				TX8_SendData(_bData);
			}
		}
		
		if ((gps1.fix_status > NO_FIX) || (gps2.fix_status > NO_FIX))
			LED_FIX_On();
		else 
			LED_FIX_Off();
	}
}

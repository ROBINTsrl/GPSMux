Project:      output/GPSSwitch
Build Number: 0
Date:         Wed May 12 15:29:20 2021
Compiler:     ICCM8C
Version:      7.05.00


Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             lit   0150   0084 =    132. bytes (rel,con,rom,lit)

       Addr  Global Symbol
      -----  --------------------------------
       0162  LoadConfigTBL_gpsswitch_Bank0
       019F  LoadConfigTBL_gpsswitch_Bank1
       01D4  __lit_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                           idata   01D4   0007 =      7. bytes (rel,con,rom,lit)

       Addr  Global Symbol
      -----  --------------------------------
       01D4  __idata_start
       01DB  __idata_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     psoc_config   01DB   0126 =    294. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       01DB  LoadConfigTBL_gpsswitch_Ordered
       02A0  _LoadConfigInit
       02A0  LoadConfigInit
       02AA  _LoadConfig_gpsswitch
       02AA  LoadConfig_gpsswitch
       0301  __psoc_config_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                     UserModules   0301   01B8 =    440. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0301  _TX8_ISR
       0361  _TX8_EnableInt
       0361  TX8_EnableInt
       0365  _TX8_DisableInt
       0365  _TX8_Start
       0365  _TX8_SetTxIntMode
       0365  TX8_Start
       036A  _TX8_Stop
       036A  TX8_SendData
       036A  _TX8_SendData
       036D  bTX8_ReadTxStatus
       036D  _bTX8_ReadTxStatus
       036D  _TX8_bReadTxStatus
       037D  _TX8_PutSHexByte
       037D  TX8_PutSHexByte
       0390  TX8_PutChar
       0390  _TX8_PutChar
       0390  _TX8_PutSHexInt
       0398  _TX8_PutString
       0398  TX8_PutString
       03A2  _TX8_CWrite
       03A2  _TX8_CPutString
       03A2  _TX8_Write
       03A2  TX8_CPutString
       03B4  _TX8_PutCRLF
       03B4  _RX8_2_ISR
       0414  RX8_2_EnableInt
       0414  _RX8_2_EnableInt
       0418  _RX8_2_DisableInt
       0418  RX8_2_Start
       0418  _RX8_2_Start
       041D  _RX8_2_Stop
       041D  RX8_2_bReadRxData
       041D  bRX8_2_ReadRxData
       041D  _bRX8_2_ReadRxData
       041D  _RX8_2_bReadRxData
       0420  _bRX8_2_ReadRxStatus
       0420  _RX8_2_bReadRxStatus
       0420  bRX8_2_ReadRxStatus
       0420  RX8_2_bReadRxStatus
       0423  RX8_2_cGetChar
       0423  _RX8_2_cGetChar
       042B  _RX8_2_iReadChar
       042B  _RX8_2_cReadChar
       042B  _RX8_1_ISR
       048B  RX8_1_EnableInt
       048B  _RX8_1_EnableInt
       048F  RX8_1_Start
       048F  _RX8_1_DisableInt
       048F  _RX8_1_Start
       0494  bRX8_1_ReadRxData
       0494  _RX8_1_bReadRxData
       0494  RX8_1_bReadRxData
       0494  _RX8_1_Stop
       0494  _bRX8_1_ReadRxData
       0497  RX8_1_bReadRxStatus
       0497  _RX8_1_bReadRxStatus
       0497  bRX8_1_ReadRxStatus
       0497  _bRX8_1_ReadRxStatus
       049A  _RX8_1_cGetChar
       049A  RX8_1_cGetChar
       04A2  _LED_FIX_On
       04A2  _RX8_1_cReadChar
       04A2  LED_FIX_On
       04A2  _RX8_1_iReadChar
       04A6  _LED_FIX_Start
       04A6  LED_FIX_Stop
       04A6  _LED_FIX_Off
       04A6  _LED_FIX_Stop
       04A6  LED_FIX_Start
       04A6  LED_FIX_Off
       04A8  _LED_FIX_Switch
       04A8  LED_FIX_Switch
       04B9  LED_FIX_Invert
       04B9  LED_FIX_GetState
       04B9  __UserModules_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            text   04B9   02CE =    718. bytes (rel,con,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       04B9  _parse
       04B9  __text_start
       058C  _RX8_1_IRQ
       05E0  _RX8_2_IRQ
       061A  _TX8_IRQ
       061E  _main
       069C  _initQueue
       06B0  _dequeue
       0702  _enqueue
       0749  <created procedures>
       0787  __text_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                            data   0000   0007 =      7. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0000  _TX8_TX_Pending
       0000  __data_start
       0001  _gps1
       0004  _gps2
       0007  __data_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
               virtual_registers   0007   000F =     15. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0007  __rZ
       0008  __rY
       0009  __rX
       000A  __r11
       000B  __r10
       000C  __r9
       000D  __r8
       000E  __r7
       000F  __r6
       0010  __r5
       0011  __r4
       0012  __r3
       0013  __r2
       0014  __r1
       0015  __r0
       0016  __virtual_registers_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                    InterruptRAM   0016   0001 =      1. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0016  NO_SHADOW
       0016  Port_0_Data_SHADE
       0016  _NO_SHADOW
       0016  _Port_0_Data_SHADE
       0017  __InterruptRAM_end

Area                               Addr   Size   Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             bss   0017   0047 =     71. bytes (rel,con,ram)

       Addr  Global Symbol
      -----  --------------------------------
       0017  __bss_start
       001B  _queue
       005E  __ramareas_end
       005E  __bss_end

Area                               Start  End    Decimal Bytes (Attributes)
--------------------------------   ----   ----   ------- ----- ------------
                             TOP   0000   00F5 =    245. bytes (abs,ovr,rom,code)

       Addr  Global Symbol
      -----  --------------------------------
       0068  __Start
       00F2  _bGetPowerSetting
       00F2  bGetPowerSetting

Files Linked      [ module(s) ]

./obj/boot.o	[ boot.asm ]
obj/main.o	[ main.c ]
obj/queue.o	[ queue.c ]
<library>	[ tx8int.asm, tx8.asm, rx8_2int.asm, rx8_2.asm, rx8_1int.asm, rx8_1.asm, psocconfigtbl.asm, psocconfig.asm ]
[ led_fix.asm, rZ.asm, rY.asm, rX.asm, r11.asm, r10.asm, r9.asm, r8.asm, r7.asm, r6.asm, r5.asm, r4.asm, r3.asm ]
[ r2.asm, r1.asm, r0.asm ]

Area Definitions

-blit:0x150.0x3fff
-bdata:0.0xff
-rwh:SSCParmBlk:0xf7.0xff


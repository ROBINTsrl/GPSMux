;  Generated by PSoC Designer 5.4.3191
;
; TX address and mask equates
TX_Data_ADDR:	equ	0h
TX_DriveMode_0_ADDR:	equ	100h
TX_DriveMode_1_ADDR:	equ	101h
TX_DriveMode_2_ADDR:	equ	3h
TX_GlobalSelect_ADDR:	equ	2h
TX_IntCtrl_0_ADDR:	equ	102h
TX_IntCtrl_1_ADDR:	equ	103h
TX_IntEn_ADDR:	equ	1h
TX_MASK:	equ	4h
; TX_Data access macros
;   GetTX_Data macro, return in a
macro GetTX_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 4h
endm
;   SetTX_Data macro
macro SetTX_Data
	or		[Port_0_Data_SHADE], 4h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[TX_Data_ADDR], a
endm
;   ClearTX_Data macro
macro ClearTX_Data
	and		[Port_0_Data_SHADE], ~4h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[TX_Data_ADDR], a
endm

; LED_FIXPin address and mask equates
LED_FIXPin_Data_ADDR:	equ	0h
LED_FIXPin_DriveMode_0_ADDR:	equ	100h
LED_FIXPin_DriveMode_1_ADDR:	equ	101h
LED_FIXPin_DriveMode_2_ADDR:	equ	3h
LED_FIXPin_GlobalSelect_ADDR:	equ	2h
LED_FIXPin_IntCtrl_0_ADDR:	equ	102h
LED_FIXPin_IntCtrl_1_ADDR:	equ	103h
LED_FIXPin_IntEn_ADDR:	equ	1h
LED_FIXPin_MASK:	equ	8h
; LED_FIXPin_Data access macros
;   GetLED_FIXPin_Data macro, return in a
macro GetLED_FIXPin_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 8h
endm
;   SetLED_FIXPin_Data macro
macro SetLED_FIXPin_Data
	or		[Port_0_Data_SHADE], 8h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LED_FIXPin_Data_ADDR], a
endm
;   ClearLED_FIXPin_Data macro
macro ClearLED_FIXPin_Data
	and		[Port_0_Data_SHADE], ~8h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[LED_FIXPin_Data_ADDR], a
endm

; RX1 address and mask equates
RX1_Data_ADDR:	equ	0h
RX1_DriveMode_0_ADDR:	equ	100h
RX1_DriveMode_1_ADDR:	equ	101h
RX1_DriveMode_2_ADDR:	equ	3h
RX1_GlobalSelect_ADDR:	equ	2h
RX1_IntCtrl_0_ADDR:	equ	102h
RX1_IntCtrl_1_ADDR:	equ	103h
RX1_IntEn_ADDR:	equ	1h
RX1_MASK:	equ	10h
; RX1_Data access macros
;   GetRX1_Data macro, return in a
macro GetRX1_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 10h
endm
;   SetRX1_Data macro
macro SetRX1_Data
	or		[Port_0_Data_SHADE], 10h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[RX1_Data_ADDR], a
endm
;   ClearRX1_Data macro
macro ClearRX1_Data
	and		[Port_0_Data_SHADE], ~10h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[RX1_Data_ADDR], a
endm

; RX2 address and mask equates
RX2_Data_ADDR:	equ	0h
RX2_DriveMode_0_ADDR:	equ	100h
RX2_DriveMode_1_ADDR:	equ	101h
RX2_DriveMode_2_ADDR:	equ	3h
RX2_GlobalSelect_ADDR:	equ	2h
RX2_IntCtrl_0_ADDR:	equ	102h
RX2_IntCtrl_1_ADDR:	equ	103h
RX2_IntEn_ADDR:	equ	1h
RX2_MASK:	equ	20h
; RX2_Data access macros
;   GetRX2_Data macro, return in a
macro GetRX2_Data
	mov		a,[Port_0_Data_SHADE]
	and		a, 20h
endm
;   SetRX2_Data macro
macro SetRX2_Data
	or		[Port_0_Data_SHADE], 20h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[RX2_Data_ADDR], a
endm
;   ClearRX2_Data macro
macro ClearRX2_Data
	and		[Port_0_Data_SHADE], ~20h
	mov		a, [Port_0_Data_SHADE]
	mov		reg[RX2_Data_ADDR], a
endm


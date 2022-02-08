/*
 * UART_prog.c
 *
 *  Created on: Oct 4, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"

#include "UART_private.h"
#include"UART_interface.h"


void vidUARTint(void)
{
	UCSRC=0x86;
	UBRRH=0;
	UBRRL=51;
	UCSRB=0x18;
}
/**********************************/
u8 u8UART_GetData (void)
{
	while((GetBit(UCSRA,7)==0));

	return UDR;
}
/*********************************/
void vidUART_SendData(u8 u8CopyData)
{while((GetBit(UCSRA,5)==0));
UDR=u8CopyData;
	}

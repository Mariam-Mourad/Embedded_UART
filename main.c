/*
 * main.c
 *
 *  Created on: Aug 23, 2019
 *      Author: Mariam
 */
#include"std_types.h"
#include"Bit_calc.h"
#include<util/delay.h>
#include"DIO_interface.h"
#include"UART_interface.h"

void main (void)
{
	vidUARTint();
	while(1){
		vidUART_SendData('a');
		_delay_ms(500);
		vidUART_SendData('b');
		_delay_ms(500);
	}
}

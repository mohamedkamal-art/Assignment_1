/*
 * GccApplication2.c
 *
 * Created: 7/10/2020 7:55:02 AM
 * Author : mohammed
 */ 

#include <avr/io.h>


int main(void)
{
    // function Print integers
	LCD_Init();
    LCD_writeInteger(123);
    while (1) 
    {
    }
}


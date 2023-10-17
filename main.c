/*
 * i2c test.c
 *
 * Created: 10/16/2023 8:51:50 AM
 * Author : Sjoerd
 */ 

#define F_CPU 16000000ul

#include <avr/io.h>
#include <util/delay.h>
#define TW_SCL_PIN			PORTC5
#define TW_SDA_PIN			PORTC4
#include "I2C.h"


int main(void)
{
tw_init(TW_FREQ_100K,false);

    /* Replace with your application code */
    while (1) 
    {
		tw_master_transmit(0x69,"hello",5,true);
		
		// _delay_ms(500);
    }
}


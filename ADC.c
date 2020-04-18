
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <stdlib.h>
#include "uart.h"
char VoltageBuffer[11]; //Declare a character buffer.
FILE uart_str = FDEV_SETUP_STREAM(uart_putchar, uart_getchar, _FDEV_SETUP_RW);// File stream for UART.
unsigned int Vin;
double Voltage;
double duty_cycle;
int time_period = 20;
int on_time;
int delay;

void blink(int s){
	while (s--)//minus one until it gets to 0.
	_delay_ms(1);//delay by 1 milliseconds.
}

int main(void){
	DDRD = 0xff; //Set portD as output.
	uart_init(); //Initialize UART
	stdout = stdin = stderr = &uart_str; //Set File outputs to point to UART stream.
	ADMUX  |= (1<<MUX2)  | (1<<MUX1); //Set to ADC6.
	ADCSRA |= (1<<ADPS2) | (1<<ADPS1) | (1<<ADPS0) | (1<<ADEN); //Set ADC prescaler to 128 and enable ADC.
	
	while ((ADCSRA && (1<<ADSC))){ //Wait until the conversion is complete.
		ADCSRA |= (1<<ADSC); //Analog to digital conversion.
		Vin = ADCL; //Read lower byte.
		Vin |= (ADCH << 8); //Read upper byte.
		
		duty_cycle = (float)Vin/1024;//Divide by maximum 10-bit value.
		// 		on_time = duty_cycle * time_period;
		// 		delay = time_period - on_time;
		// 		PORTD = (0b00001000);//Turn on the LED.
		// 		blink(on_time);
		// 		PORTD = (0b00000000);//Return to 0 so the LED can blink.
		// 		blink(delay);
		PORTD = (1<<2);

		Voltage = (float)Vin/1024.00 * 5.00; //Divide by maximum 10-bit value, multiply by 5V for normalization.
		if(Voltage>3){
			PORTD = (0<<2);
		}
		
		dtostrf(Voltage, 3, 2, VoltageBuffer); //Writing voltage in string format, add 2 char space and 3 decimal places.
		fprintf(stdout,"Voltage: %s V\n",VoltageBuffer); //Printing the result in uart.
	}
}
/*
 * CPP_Avr_Atm328.c
 *
 * Created: 26.07.2023 7:52:53
 * Author : slave
 */ 

#include "7Segment/Seven_segment.h"


void goodLoad(){
	DDRC = 0b0000011;// portC 0,1 pins in output
	DDRD = 0b00000000;
	PORTC = 0b0000001;
	_delay_ms(1000);
	PORTC = 0b0000000;
	PORTC = 0b0000010;
	_delay_ms(1000);
	PORTC = 0b0000000;
	
	DDRC = 0b0000000;
}


int main(void)
{
	goodLoad();
	
	while(1){
		for(int i=0; i<= 10;i++){
			switch_On(PORTD,i);
		}
	}
}





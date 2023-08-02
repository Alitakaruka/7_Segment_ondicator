/*
 * seven_segment_indicator.c
 *
 * Created: 01.08.2023 8:39:23
 *  Author: slave
 */ 
#include "Seven_segment.h"

char get_pins_light(char symb){
	char data[10] = {0b11111100, 0b01100000, 0b11011010,0b11110010,0b01100110,0b10110110,0b10111110,0b1110000,0b11111110,0b11110110};
	if(symb > 9 || symb < 0){
		return 0;
	}
	return data[symb];
}


void switch_On (int PORT,char symb){
	if(PORT != PORTC && PORT != PORTB && PORT != PORTD){
		return;
	}
	char pins = get_pins_light(symb);
	PORT = 0b00000000;
	for(int i =0;i<8;i++){
		PORT |= (pins | (1<<i));
		_delay_ms(2000);
	}
}
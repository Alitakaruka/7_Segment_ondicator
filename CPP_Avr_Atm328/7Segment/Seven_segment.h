/*
 * Seven_segment.h
 *
 * Created: 01.08.2023 10:05:15
 *  Author: slave
 */ 


#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include <avr/io.h>
#include <util/delay.h>

void switch_On (int PORT,char symb);
char get_pins_light(char symb);



#endif /* SEVEN_SEGMENT_H_ */
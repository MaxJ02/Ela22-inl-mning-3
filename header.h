#ifndef HEADER_H_
#define HEADER_H_

#include "led.h"
#include "button.h"
#include "led_vector.h"
#include "adc.h"

extern struct led l1, l2, l3;
extern struct button b1;
extern struct led_vector v1;
extern volatile bool leds_enabled;
	
void setup(void); //Initierar mikrodatorn vid start.//
void fsm_update(void); //Uppdateringsfunktion som uppdaterar state.
void init_interrupts(void); //Initierar avbrott
void fsm_set_output(const uint16_t blink_speed_ms); 

#endif /* HEADER_H_ */
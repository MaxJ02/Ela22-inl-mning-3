#include "header.h"

ISR (PCINT0_vect)
{
	if (!button_is_pressed(&b1))  // Kollar ifall någon av knapparna är nedtryckt. Om sant, uppdatera.
	{
		leds_enabled = !leds_enabled;
	}
	
	return;
}

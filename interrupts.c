#include "header.h"

ISR (PCINT0_vect)
{
	if (!button_is_pressed(&b1))  // Kollar ifall n�gon av knapparna �r nedtryckt. Om sant, uppdatera.
	{
		leds_enabled = !leds_enabled;
	}
	
	return;
}

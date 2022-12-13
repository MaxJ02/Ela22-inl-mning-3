#include "header.h"

struct led l1, l2, l3;
struct button b1;
struct led_vector v1;
volatile bool leds_enabled = false;

void setup(void)
{
    led_init(&l1, 8);
    led_init(&l2, 9);
    led_init(&l3, 10);
	
    button_init(&b1, 13);
    button_enable_interrupt(&b1);

    led_vector_init(&v1);
    led_vector_push(&v1, &l1);
    led_vector_push(&v1, &l2);
    led_vector_push(&v1, &l3);
    return;
}
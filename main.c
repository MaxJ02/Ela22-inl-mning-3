#include "header.h"

int main(void)
{
   setup();
   
   while(1)
   {
      if(leds_enabled)
	  {
		led_vector_blink_sequentially(&v1, 100);
	  }
	  else
	  {
		led_vector_off(&v1);
	  }
   }
        return 0;
}


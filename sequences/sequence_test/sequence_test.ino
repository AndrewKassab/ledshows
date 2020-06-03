#include <sequences.hpp>

CRGB leds_list[NUM_LEDS];

void setup() 
{
  default_setup(leds_list);
}
 
void loop() {
    tripple_swap_downwards(leds_list, 400, CRGB::Green, CRGB::Blue, CRGB::Red);
    delay(400);
    tripple_swap_upwards(leds_list, 400, CRGB::Green, CRGB::Blue, CRGB::Red);
    delay(400);
}

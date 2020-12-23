#include <sequences.hpp>

CRGB leds[NUM_LEDS];

void setup() 
{
  default_setup(leds);
}
 
void loop() {
  void trace_to_center(CRGB * leds, int thickness, int delayTime, CRGB color);
  trace_to_center(leds, 5, 1, CRGB::Blue);
  trace_to_center(leds, 5, 1, CRGB::Pink);
  trace_to_center(leds, 5, 1, CRGB::Green);
  trace_to_center(leds, 5, 1, CRGB::Yellow);
  trace_to_center(leds, 5, 1, CRGB::Red);
}

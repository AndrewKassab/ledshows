#include <sequences.hpp>

CRGB leds_list[NUM_LEDS];

LightSegment leftSquare = get_left_square(leds_list);
LightSegment rightSquare = get_right_square(leds_list);
SegmentList squares = SegmentList(&leftSquare);

void setup() 
{
  default_setup(leds_list);
  squares.add(&rightSquare);
}
 
void loop() {
  square_cycle_speed_up_rainbow(leds_list, 200, 25, 200, 1);
}

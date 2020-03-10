#include <sequences.hpp>

CRGB leds_list[NUM_LEDS];

void setup() 
{
  default_setup(leds_list);
}
 
void loop() {

  int delayTime = 100;

  set_both_squares_to_color(leds_list, CRGB::Blue);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Black);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Cyan);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Black);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Green);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Black);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::ForestGreen);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Black);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Red);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Black);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::DeepPink);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Black);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Gold);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Black);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Purple);
  delay(delayTime);
  set_both_squares_to_color(leds_list, CRGB::Black);
  delay(delayTime);


}

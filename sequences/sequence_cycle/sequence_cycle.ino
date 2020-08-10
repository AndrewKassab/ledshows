#include <time.h>
#include <sequences.hpp>

CRGB leds_list[NUM_LEDS];

void setup() 
{
  default_setup(leds_list);
}
 
void loop() {

  LightSegment allLights = get_all_lights(leds_list);

  time_t theTime = time(NULL);
  struct tm *aTime = localtime(&theTime);
  int hour = aTime->tm_hour;

  FastLED.setBrightness(110);

  square_color_trace(leds_list, 1, 20, CRGB::Purple);
  square_color_trace(leds_list, 1, 20, CRGB::Yellow);
  square_color_trace(leds_list, 1, 20, CRGB::Green);
  square_color_trace(leds_list, 1, 20, CRGB::Blue);
  square_color_trace(leds_list, 1, 20, CRGB::Gold);
  square_color_trace(leds_list, 1, 20, CRGB::Red);
  square_color_trace(leds_list, 1, 20, CRGB::ForestGreen);

  allLights.fadeToBlack(15);

  for ( int i = 0; i < 4; i++ ){
    FastLED.clear();
    switch_between_sets_of_lights(leds_list, 700, CRGB::Cyan);
    FastLED.clear();
    delay(700);
    switch_between_sets_of_lights(leds_list, 700, CRGB::Gold);
    FastLED.clear();
    delay(700);
    switch_between_sets_of_lights(leds_list, 700, CRGB::White);
    FastLED.clear();
    delay(700);
    switch_between_sets_of_lights(leds_list, 700, CRGB::Fuchsia);
    delay(700);
  }

  allLights.fadeToBlack(8);

  square_cycle_speed_up_rainbow(leds_list, 300, 25, 6, 275); 

  allLights.fadeToBlack(20);

  blink_all_lights(leds_list, CRGB::Gold, 300);
  delay(300);
  blink_all_lights(leds_list, CRGB::Blue, 300);
  delay(300);
  blink_all_lights(leds_list, CRGB::White, 300);
  delay(325);
  blink_all_lights(leds_list, CRGB::Gold, 300);
  delay(300);
  blink_all_lights(leds_list, CRGB::Cyan, 300);

  allLights.fadeToBlack(20);

  squares_left_right_dash_up_down(leds_list, 20, CRGB::Red, CRGB::Blue);
  squares_left_right_dash_up_down(leds_list, 20, CRGB::DeepPink, CRGB::Cyan);
  squares_left_right_dash_up_down(leds_list, 20, CRGB::Gold, CRGB::ForestGreen);
  squares_left_right_dash_up_down(leds_list, 20, CRGB::Red, CRGB::Blue);
  squares_left_right_dash_up_down(leds_list, 20, CRGB::DeepPink, CRGB::Cyan);
  delay(450);

  for (int i = 0; i <= 2; i++ ){
    sides_to_middle(leds_list, 550, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(625);
    top_to_bottom(leds_list, 550, CRGB::Red, CRGB::Green);
    delay(625);
    sides_to_middle(leds_list, 550, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(625);
    top_to_bottom(leds_list, 550, CRGB::Red, CRGB::Green);
    delay(625);
  }

  allLights.fadeToBlack(25);

  LightSegment leftSquare = get_left_square(leds_list);
  LightSegment rightSquare = get_right_square(leds_list);
  SegmentList squares = SegmentList(&leftSquare);
  squares.add(&rightSquare);
  squares.fadeAllIn(10, CRGB::Red);
  squares.rainbowFade(2600);

  squares.fadeAllDown(25);

  squares_top_bottom_dash_left_right(leds_list, 20, CRGB::Blue, CRGB::Gold);
  squares_top_bottom_dash_left_right(leds_list, 20, CRGB::Blue, CRGB::Gold);
  trace_square_with_delays(leds_list, 10, 13, 40, CRGB::Blue, CRGB::Gold);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 10, 13, 40, CRGB::Blue, CRGB::Gold);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds_list, 20, CRGB::Tomato, CRGB::Turquoise);
  squares_top_bottom_dash_left_right(leds_list, 20, CRGB::Tomato, CRGB::Turquoise);
  trace_square_with_delays(leds_list, 10, 13, 40, CRGB::Tomato, CRGB::Turquoise);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 10, 13, 40, CRGB::Tomato, CRGB::Turquoise);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds_list, 20, CRGB::Red, CRGB::Purple);
  squares_top_bottom_dash_left_right(leds_list, 20, CRGB::Red, CRGB::Purple);
  trace_square_with_delays(leds_list, 10, 13, 40, CRGB::Red, CRGB::Purple);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 10, 13, 40, CRGB::Red, CRGB::Purple);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds_list, 20, CRGB::Blue, CRGB::Gold);
  squares_top_bottom_dash_left_right(leds_list, 20, CRGB::Blue, CRGB::Gold);

}

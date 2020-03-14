#include <sequences.hpp>

CRGB leds_list[NUM_LEDS];

void setup() 
{
  default_setup(leds_list);
}
 
void loop() {

  LightSegment allLights = get_all_lights(leds_list);

  square_color_trace(leds_list, 1, 14, CRGB::Purple);
  square_color_trace(leds_list, 1, 14, CRGB::Yellow);
  square_color_trace(leds_list, 1, 14, CRGB::Green);
  square_color_trace(leds_list, 1, 14, CRGB::Blue);
  square_color_trace(leds_list, 1, 14, CRGB::ForestGreen);
  square_color_trace(leds_list, 1, 14, CRGB::Red);

  color_trace_bridges_to_center(leds_list, 14, CRGB::Red);
  color_trace_outwards_from_center(leds_list, 14, CRGB::Cyan);
  square_color_trace(leds_list, 1, 14, CRGB::Blue);
  color_trace_bridges_to_center(leds_list, 14, CRGB::Blue);
  color_trace_outwards_from_center(leds_list, 14, CRGB::Cyan);

  allLights.fadeToBlack(15);

  for ( int i = 0; i < 4; i++ ){
    FastLED.clear();
    switch_between_sets_of_lights(leds_list, 500, CRGB::Gold);
    FastLED.clear();
    delay(500);
    switch_between_sets_of_lights(leds_list, 500, CRGB::Cyan);
    FastLED.clear();
    delay(500);
    switch_between_sets_of_lights(leds_list, 500, CRGB::White);
    FastLED.clear();
    delay(500);
    switch_between_sets_of_lights(leds_list, 500, CRGB::Fuchsia);
  }

  allLights.fadeToBlack(15);

  for ( int i = 0; i <= 2; i++ ){
    allLights.turnOff();
    up_down_trace(leds_list, 5, 16, CRGB::DeepPink, CRGB::Cyan);
    up_down_trace(leds_list, 5, 16, CRGB::DeepPink, CRGB::Cyan);
    allLights.turnOff();
    left_right_trace(leds_list, 5, 16, CRGB::ForestGreen, CRGB::Purple);
    left_right_trace(leds_list, 5, 16, CRGB::ForestGreen, CRGB::Purple);
  }

  allLights.fadeToBlack(20);

  blink_all_lights(leds_list, CRGB::White, 250);
  delay(250);
  blink_all_lights(leds_list, CRGB::Blue, 250);
  delay(250);
  blink_all_lights(leds_list, CRGB::Gold, 250);
  delay(250);
  blink_all_lights(leds_list, CRGB::DeepPink, 250);

  allLights.fadeToBlack(20);

  corners_cycle_towards_center(leds_list, 500, CRGB::ForestGreen, CRGB::DeepPink);
  allLights.fadeToBlack(13);
  corners_cycle_towards_center(leds_list, 500, CRGB::Red, CRGB::Green);
  allLights.fadeToBlack(13);
  corners_cycle_towards_center(leds_list, 500, CRGB::Fuchsia, CRGB::Blue);
  allLights.fadeToBlack(13);
  corners_cycle_towards_center(leds_list, 500, CRGB::Gold, CRGB::Cyan);
  allLights.fadeToBlack(22);

  squares_left_right_dash_up_down(leds_list, 12, CRGB::Red, CRGB::Blue);
  squares_left_right_dash_up_down(leds_list, 12, CRGB::DeepPink, CRGB::Cyan);
  squares_left_right_dash_up_down(leds_list, 12, CRGB::Gold, CRGB::ForestGreen);
  squares_left_right_dash_up_down(leds_list, 12, CRGB::Red, CRGB::Blue);

  delay(450);

  for ( int i = 0; i <= 2; i++ ){
    sides_to_middle(leds_list, 450, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(525);
    top_to_bottom(leds_list, 450, CRGB::Red, CRGB::Green);
    delay(525);
    sides_to_middle(leds_list, 450, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(525);
    top_to_bottom(leds_list, 450, CRGB::Red, CRGB::Green);
    delay(525);
  }

  allLights.fadeToBlack(25);

  square_cycle_speed_up_rainbow(leds_list, 260, 20, 12, 35);

  allLights.fadeToBlack(20);

  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Blue, CRGB::Gold);
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Blue, CRGB::Gold);
  trace_square_with_delays(leds_list, 10, 8, 30, CRGB::Blue, CRGB::Gold);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 10, 8, 30, CRGB::Blue, CRGB::Gold);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Tomato, CRGB::Turquoise);
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Tomato, CRGB::Turquoise);
  trace_square_with_delays(leds_list, 10, 8, 30, CRGB::Tomato, CRGB::Turquoise);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 10, 8, 30, CRGB::Tomato, CRGB::Turquoise);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Red, CRGB::Purple);
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Red, CRGB::Purple);

  allLights.turnOff();

}

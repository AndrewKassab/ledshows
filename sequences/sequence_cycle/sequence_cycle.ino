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

  allLights.fadeToBlack(15);

  for ( int i = 0; i < 3; i++ ){
    square_side_cycle(leds_list, 550, CRGB::ForestGreen, CRGB::DeepPink, CRGB::ForestGreen, CRGB::DeepPink);
    delay(550);
    square_side_cycle(leds_list, 550, CRGB::Gold, CRGB::SkyBlue, CRGB::Gold, CRGB::SkyBlue);
    delay(550);
  }

  allLights.fadeToBlack(5);

  for ( int i = 0; i <= 2; i++ ){
    up_down_trace(leds_list, 4, 18, CRGB::DeepPink, CRGB::Cyan);
    up_down_trace(leds_list, 4, 18, CRGB::DeepPink, CRGB::Cyan);
    allLights.turnOff();
    left_right_trace(leds_list, 4, 18, CRGB::ForestGreen, CRGB::Purple);
    left_right_trace(leds_list, 4, 18, CRGB::ForestGreen, CRGB::Purple);
    allLights.turnOff();
  }

  blink_all_lights(leds_list, CRGB::White, 250);
  blink_all_lights(leds_list, CRGB::Blue, 250);
  blink_all_lights(leds_list, CRGB::Gold, 250);

  allLights.fadeToBlack(15);

  for ( int i = 0; i < 2; i++ ){
    corners_cycle_towards_center(leds_list, 550, CRGB::ForestGreen, CRGB::DeepPink);
    allLights.fadeToBlack(10);
    corners_cycle_towards_center(leds_list, 550, CRGB::Gold, CRGB::Cyan);
    allLights.fadeToBlack(10);
  }

  squares_left_right_dash_up_down(leds_list, 12, CRGB::Red, CRGB::Blue);
  squares_left_right_dash_up_down(leds_list, 12, CRGB::DeepPink, CRGB::Cyan);
  squares_left_right_dash_up_down(leds_list, 12, CRGB::Gold, CRGB::ForestGreen);

  delay(150);

  for ( int i = 0; i <= 2; i++ ){
    sides_to_middle(leds_list, 600, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(600);
    top_to_bottom(leds_list, 600, CRGB::Red, CRGB::Green);
    delay(600);
    sides_to_middle(leds_list, 600, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(600);
    top_to_bottom(leds_list, 600, CRGB::Red, CRGB::Green);
    delay(600);
  }

  allLights.fadeToBlack(10);

  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Blue, CRGB::Gold);
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Blue, CRGB::Gold);
  trace_square_with_delays(leds_list, 7, 10, 50, CRGB::Blue, CRGB::Gold);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 7, 10, 50, CRGB::Blue, CRGB::Gold);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Tomato, CRGB::Turquoise);
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Tomato, CRGB::Turquoise);
  trace_square_with_delays(leds_list, 7, 10, 50, CRGB::Tomato, CRGB::Turquoise);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 7, 10, 50, CRGB::Tomato, CRGB::Turquoise);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Red, CRGB::Purple);
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Red, CRGB::Purple);

  allLights.turnOff();

}

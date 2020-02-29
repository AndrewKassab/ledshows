#include <sequences.hpp>

CRGB leds_list[NUM_LEDS];

void setup() 
{
  default_setup(leds_list);
}
 
void loop() {

  LightSegment allLights = get_all_lights(leds_list);

  square_color_trace(leds_list, 1, 15, CRGB::Purple);
  square_color_trace(leds_list, 1, 15, CRGB::Yellow);
  square_color_trace(leds_list, 1, 15, CRGB::Green);
  square_color_trace(leds_list, 1, 15, CRGB::ForestGreen);
  square_color_trace(leds_list, 1, 15, CRGB::Blue);
  square_color_trace(leds_list, 1, 15, CRGB::DeepPink);
  square_color_trace(leds_list, 1, 15, CRGB::Cyan);
  square_color_trace(leds_list, 1, 15, CRGB::Red);

  color_trace_bridges_to_center(leds_list, 15, CRGB::Red);
  color_trace_outwards_from_center(leds_list, 15, CRGB::Blue);
  square_color_trace(leds_list, 1, 15, CRGB::Red);
  color_trace_bridges_to_center(leds_list, 15, CRGB::Red);
  color_trace_outwards_from_center(leds_list, 15, CRGB::Blue);

  allLights.fadeToBlack(15);

  for ( int i = 0; i < 4; i++ ){
    square_side_cycle(leds_list, 550, CRGB::ForestGreen, CRGB::DeepPink, CRGB::ForestGreen, CRGB::DeepPink);
    delay(550);
    square_side_cycle(leds_list, 550, CRGB::Gold, CRGB::SkyBlue, CRGB::Gold, CRGB::SkyBlue);
    delay(550);
  }

  allLights.fadeToBlack(5);

  for ( int i = 0; i <= 3; i++ ){
    up_down_trace(leds_list, 4, 18, CRGB::DeepPink, CRGB::Cyan);
    up_down_trace(leds_list, 4, 18, CRGB::DeepPink, CRGB::Cyan);
    allLights.turnOff();
    left_right_trace(leds_list, 4, 18, CRGB::ForestGreen, CRGB::Purple);
    left_right_trace(leds_list, 4, 18, CRGB::ForestGreen, CRGB::Purple);
    allLights.turnOff();
  }

  allLights.turnOff();


  for ( int i = 0; i < 2; i++ ){
    corners_cycle_towards_center(leds_list, 550, CRGB::ForestGreen, CRGB::DeepPink);
    allLights.fadeToBlack(10);
    corners_cycle_towards_center(leds_list, 550, CRGB::Gold, CRGB::Cyan);
    allLights.fadeToBlack(10);
  }

  for ( int i = 0; i <= 2; i++ ){
    top_to_bottom(leds_list, 600, CRGB::Red, CRGB::Green);
    delay(600);
    sides_to_middle(leds_list, 600, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(600);
    top_to_bottom(leds_list, 600, CRGB::Red, CRGB::Green);
    delay(600);
    sides_to_middle(leds_list, 600, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(600);
    top_to_bottom(leds_list, 600, CRGB::Red, CRGB::Green);
    delay(600);
    sides_to_middle(leds_list, 600, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(600);
  }

  allLights.fadeToBlack(15);

  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Blue, CRGB::Gold);
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Blue, CRGB::Gold);
  trace_square_with_delays(leds_list, 6, 12, 40, CRGB::Blue, CRGB::Gold);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 6, 12, 40, CRGB::Blue, CRGB::Gold);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Tomato, CRGB::Turquoise);
  squares_top_bottom_dash_left_right(leds_list, 12, CRGB::Tomato, CRGB::Turquoise);
  trace_square_with_delays(leds_list, 6, 12, 40, CRGB::Tomato, CRGB::Turquoise);
  allLights.turnOff();
  trace_square_with_delays(leds_list, 6, 12, 40, CRGB::Tomato, CRGB::Turquoise);
  allLights.turnOff();

  allLights.turnOff();

}

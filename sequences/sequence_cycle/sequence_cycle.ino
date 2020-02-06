#include <sequences.hpp>

CRGB leds_list[NUM_LEDS];

void setup() 
{
  default_setup(leds_list);
}
 
void loop() {

  LightSegment allLights = get_all_lights(leds_list);

  square_color_trace(leds_list, 1, 15, CRGB::Red);
  square_color_trace(leds_list, 1, 15, CRGB::Yellow);
  square_color_trace(leds_list, 1, 15, CRGB::Green);
  square_color_trace(leds_list, 1, 15, CRGB::ForestGreen);
  square_color_trace(leds_list, 1, 15, CRGB::Blue);
  square_color_trace(leds_list, 1, 15, CRGB::DeepPink);
  square_color_trace(leds_list, 1, 15, CRGB::Cyan);
  square_color_trace(leds_list, 1, 15, CRGB::Purple);

  for ( int i = 0; i < 7; i++ ){
    square_side_cycle(leds_list, 550, CRGB::ForestGreen, CRGB::DeepPink, CRGB::ForestGreen, CRGB::DeepPink);
    delay(550);
  }

  allLights.turnOff();

  for ( int i = 0; i <= 5; i++ ){
    up_down_trace(leds_list, 3, 20, CRGB::DeepPink, CRGB::Cyan);
  }

  allLights.turnOff();

  for ( int i = 0; i <= 5; i++ ){
    left_right_trace(leds_list, 3, 20, CRGB::ForestGreen, CRGB::Purple);
  }

  allLights.turnOff();

  for ( int i = 0; i <= 7; i++ ){
    top_to_bottom(leds_list, 600, CRGB::Red, CRGB::Green);
    delay(600);
  }

  for ( int i = 0; i<= 7; i++ ){
    sides_to_middle(leds_list, 600, CRGB::Blue, CRGB::Gold, CRGB::Cyan);
    delay(600);
  }

  allLights.turnOff();

}

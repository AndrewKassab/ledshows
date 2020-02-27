#include <sequences.hpp>

CRGB leds[NUM_LEDS];

void setup(){
  default_setup(leds);
  FastLED.clear();
  FastLED.show();
}

void loop(){
  LightSegment allLights = get_all_lights(leds);
  delay(2745);
  for ( int i = 0; i <= 1; i++){
    delay(330);
    top_to_bottom(leds, 230, CRGB::Cyan, CRGB::SkyBlue);
    delay(650);
    sides_to_middle(leds, 300, CRGB::Cyan, CRGB::Blue, CRGB::White);
    delay(380);
    top_to_bottom(leds, 370, CRGB::Cyan, CRGB::SkyBlue);
    delay(250);
    top_to_bottom(leds, 230, CRGB::Cyan, CRGB::SkyBlue);
    delay(640);
    sides_to_middle(leds, 300, CRGB::Cyan, CRGB::Blue, CRGB::White);
    delay(390);
    top_to_bottom(leds, 190, CRGB::Cyan, CRGB::SkyBlue);
  }

  delay(215);
  allLights.turnOff();
  FastLED.show();

  square_color_trace(leds, 1, 8, CRGB::Cyan);
  square_color_trace(leds, 1, 8, CRGB::Blue);
  square_color_trace(leds, 1, 8, CRGB::SkyBlue);

  allLights.turnOff();
  FastLED.show();

  for (int i = 0; i < 2; i++){
    up_down_trace(leds, 3, 6, CRGB::Cyan, CRGB::DeepPink);
  }
  allLights.turnOff();
  FastLED.show();
  square_color_trace(leds, 1, 8, CRGB::Cyan);
  square_color_trace(leds, 1, 7, CRGB::SkyBlue);
  square_color_trace(leds, 1, 7, CRGB::Blue);
  square_color_trace(leds, 1, 7, CRGB::Cyan);
  allLights.turnOff();

  left_right_trace(leds, 3, 5, CRGB::Cyan, CRGB::DeepPink);
  delay(200);
  left_right_trace(leds, 3, 5, CRGB::Cyan, CRGB::DeepPink);
  left_right_trace(leds, 3, 5, CRGB::Cyan, CRGB::DeepPink);
  delay(200);
  left_right_trace(leds, 3, 5, CRGB::Cyan, CRGB::DeepPink);
  left_right_trace(leds, 3, 5, CRGB::Cyan, CRGB::DeepPink);
  delay(390);
  left_right_trace(leds, 3, 5, CRGB::Cyan, CRGB::DeepPink);
  left_right_trace(leds, 3, 5, CRGB::Cyan, CRGB::DeepPink);
  left_right_trace(leds, 3, 5, CRGB::Cyan, CRGB::DeepPink);

  for ( int i = 0; i <= 4; i++){
    delay(350);
    top_to_bottom(leds, 235, CRGB::Blue, CRGB::SkyBlue);
    delay(650);
    sides_to_middle(leds, 300, CRGB::Blue, CRGB::Grey, CRGB::Cyan);
    delay(380);
    top_to_bottom(leds, 370, CRGB::Blue, CRGB::SkyBlue);
    delay(250);
    top_to_bottom(leds, 230, CRGB::Blue, CRGB::SkyBlue);
    delay(640);
    sides_to_middle(leds, 300, CRGB::Blue, CRGB::Grey, CRGB::Cyan);
    delay(390);
    top_to_bottom(leds, 190, CRGB::Blue, CRGB::SkyBlue);
  }

  delay(350);
  FastLED.clear();

  // TODO: light up corners in middle for extra effect
  fade_squares_up_down(leds, 10, 50, CRGB::Cyan);
  fade_squares_up_down(leds, 10, 50, CRGB::Blue);
  for ( int i = 0; i <= 5; i++ ){
    trace_upwards(leds, 3, 31, CRGB::Cyan);
  }
  delay(60);
  trace_square_with_delays(leds, 5, 6, 235, CRGB::Cyan, CRGB::Cyan);
  delay(235);
  FastLED.clear();
  trace_out_from_center(leds, 5, 14, CRGB::Blue);
  FastLED.clear();
  
  color_trace_to_center(leds, 18, CRGB::Blue);
  color_trace_outwards_from_center(leds, 18, CRGB::Cyan);
  square_color_trace(leds, 1, 18, CRGB::Blue);
  color_trace_bridges_to_center(leds, 18, CRGB::Blue);
  color_trace_outwards_from_center(leds, 18, CRGB::Cyan);
  square_color_trace(leds, 1, 18, CRGB::Blue);
  color_trace_bridges_to_center(leds, 17, CRGB::Blue);
  color_trace_outwards_from_center(leds, 17, CRGB::Cyan);

  for ( int i = 0; i <= 6; i++ ){
    square_side_cycle(leds, 615, CRGB::DeepPink, CRGB::Red, CRGB::ForestGreen, CRGB::Red);
    delay(615);
  }

  delay(250);

  LightSegment leftSideBottom = get_left_square_bottom(leds);
  LightSegment rightSideBottom = get_right_square_bottom(leds);
  SegmentList bottoms = SegmentList(&leftSideBottom);
  bottoms.add(&rightSideBottom);
  bottoms.fadeAllDown(47);

  FastLED.clear();
  left_right_trace(leds, 3, 14, CRGB::Red, CRGB::ForestGreen);
  left_right_trace(leds, 3, 14, CRGB::Red, CRGB::ForestGreen);
  FastLED.clear();
  up_down_trace(leds, 3, 14, CRGB::Red, CRGB::ForestGreen);
  up_down_trace(leds, 3, 14, CRGB::Red, CRGB::ForestGreen);

  FastLED.clear();
  left_right_trace(leds, 3, 14, CRGB::Red, CRGB::ForestGreen);
  left_right_trace(leds, 3, 14, CRGB::Red, CRGB::ForestGreen);
  FastLED.clear();
  up_down_trace(leds, 3, 14, CRGB::Cyan, CRGB::White);
  up_down_trace(leds, 3, 14, CRGB::Cyan, CRGB::White);

  FastLED.clear();
  left_right_trace(leds, 3, 17, CRGB::Cyan, CRGB::White);
  left_right_trace(leds, 3, 17, CRGB::Cyan, CRGB::White);
  FastLED.clear();

  delay(40);

  for ( int i = 0; i <= 3; i++){
    delay(350);
    top_to_bottom(leds, 235, CRGB::Blue, CRGB::SkyBlue);
    delay(650);
    sides_to_middle(leds, 300, CRGB::Blue, CRGB::Grey, CRGB::Cyan);
    delay(380);
    top_to_bottom(leds, 370, CRGB::Blue, CRGB::SkyBlue);
    delay(250);
    top_to_bottom(leds, 230, CRGB::Blue, CRGB::SkyBlue);
    delay(640);
    sides_to_middle(leds, 300, CRGB::Blue, CRGB::Grey, CRGB::Cyan);
    delay(390);
    top_to_bottom(leds, 190, CRGB::Blue, CRGB::SkyBlue);
  }

  delay(615);
  for ( int i = 0; i <= 3; i++){
    FastLED.clear();
    corners_cycle_towards_center(leds, 615, CRGB::Blue, CRGB::Cyan);
    delay(615);
  }

  SegmentList allLightsAsList = SegmentList(&allLights);
  allLightsAsList.fadeAllDown(50);

  for ( int i = 0; i <= 7; i++){
    square_side_cycle(leds, 615, CRGB::Blue, CRGB::Cyan, CRGB::Blue, CRGB::Cyan);
    delay(615);
  }

  FastLED.clear();
  
  color_trace_to_center(leds, 18, CRGB::Blue);
  color_trace_outwards_from_center(leds, 18, CRGB::Cyan);
  square_color_trace(leds, 1, 18, CRGB::Blue);
  color_trace_bridges_to_center(leds, 18, CRGB::Blue);
  color_trace_outwards_from_center(leds, 17, CRGB::Cyan);
  square_color_trace(leds, 1, 17, CRGB::Blue);
  color_trace_bridges_to_center(leds, 17, CRGB::Blue);
  color_trace_outwards_from_center(leds, 17, CRGB::Red);

  FastLED.clear();

  for ( int i = 0; i <= 1; i++){
    delay(350);
    top_to_bottom(leds, 235, CRGB::Red, CRGB::ForestGreen);
    delay(650);
    sides_to_middle(leds, 300, CRGB::Red, CRGB::Green, CRGB::Blue);
    delay(380);
    top_to_bottom(leds, 370, CRGB::Red, CRGB::ForestGreen);
    delay(250);
    top_to_bottom(leds, 230, CRGB::Red, CRGB::ForestGreen);
    delay(640);
    sides_to_middle(leds, 300, CRGB::Red, CRGB::Green, CRGB::Blue);
    delay(390);
    top_to_bottom(leds, 190, CRGB::Red, CRGB::ForestGreen);
  }

  allLightsAsList.fadeAllDown(45);

  delay(10000);
}

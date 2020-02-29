#include <sequences.hpp>

CRGB leds[NUM_LEDS];

void setup(){
  default_setup(leds);
}

void loop(){

  delay(3000);

  // vrooooom
  LightSegment middleTopLeft = get_middle_top_left(leds);
  LightSegment middleTopRight = get_middle_top_right(leds);
  LightSegment allLights = get_all_lights(leds);
  SegmentList middleTops = SegmentList(&middleTopLeft);
  middleTops.add(&middleTopRight);
  boolean reverseTable[2] = {false, true};
  middleTops.traceAllDontRemain(5, 26, reverseTable, CRGB::Cyan);

  // all my friends are talking... 
  fade_all_lights_up_in_sets(leds, 8, CRGB::Cyan, CRGB::Cyan);

  delay(30);

  // beat comes in 
  for (int i = 0; i <= 3; i++){
    square_side_cycle(leds, 560, CRGB::ForestGreen, CRGB::DeepPink, CRGB::ForestGreen, CRGB::DeepPink);
    delay(560);
  }

  allLights.turnOff();

  // tell me what's going on...?
  for (int i = 0; i <= 7; i++){
    alternate_sides_and_tops_with_alternating_corner_colors(leds, 560, CRGB::Red, CRGB::Purple);
    delay(560);
    allLights.turnOff();
  }

  FastLED.clear();
  allLights.fadeUp(1, CRGB::Cyan);

  bridge();

  for ( int i = 0; i <= 3; i++){
    trace_upwards(leds, 3, 10, CRGB::Cyan);
  }

  trace_square_with_delays(leds, 5, 150, 5, CRGB::Cyan, CRGB::Cyan);

  SegmentList squares = SegmentList(&get_left_square(leds));
  squares.add(&get_right_square(leds));

  squares.setAllToColor(CRGB::Cyan);

  delay(400);
  FastLED.clear();

  for (int i = 0; i <= 3; i++){
    sides_to_middle(leds, 560, CRGB::Cyan, CRGB::Cyan, CRGB::Cyan);
  }

  delay(10000);

}


void bridge(){

  // They
  LightSegment middleTopLeft = get_middle_top_left(leds);
  LightSegment middleTopRight = get_middle_top_right(leds);
  SegmentList middleTopBars = SegmentList(&middleTopLeft);
  middleTopBars.add(&middleTopRight);
  boolean reverseTable[2] = {true, false};
  middleTopBars.traceAllAndRemain(2,6,reverseTable, CRGB::Black);

  delay(100);

  LightSegment startLeftBridgeToMiddleTopLeft = LightSegment(leds, left_bottom_right_corner, middle_top_left_corner);
  LightSegment middleTopRightToRightBridgeEnd = LightSegment(leds, middle_top_right_corner, right_bottom_left_corner);

  // Know
  SegmentList middleSidesToBridges = SegmentList(&startLeftBridgeToMiddleTopLeft);
  middleSidesToBridges.add(&middleTopRightToRightBridgeEnd);
  middleSidesToBridges.traceAllAndRemain(2,30,reverseTable, CRGB::Black);

  delay(130);

  // They're makin messes
  square_color_trace(leds, 1, 1, CRGB::Red);
  square_color_trace(leds, 1, 1, CRGB::Blue);
  square_color_trace(leds, 1, 1, CRGB::Green);
  square_color_trace(leds, 1, 1, CRGB::Purple);

  delay(20);

  // duna na na naaaa
  leds[middle_bottom_left_corner] = CRGB::White;
  leds[middle_bottom_right_corner] = CRGB::White;
  FastLED.show();
  delay(220);
  leds[middle_bottom_left_corner] = CRGB::Black;
  leds[middle_bottom_right_corner] = CRGB::Black;
  leds[middle_bottom_right_corner - 10] = CRGB::White;
  leds[middle_bottom_left_corner + 10] = CRGB::White;
  FastLED.show();
  delay(270);
  leds[middle_top_left_corner] = CRGB::White;
  leds[middle_top_right_corner] = CRGB::White;
  leds[middle_bottom_right_corner - 10] = CRGB::Black;
  leds[middle_bottom_left_corner + 10] = CRGB::Black;
  FastLED.show();
  delay(290);
  leds[middle_top_right_corner - 10] = CRGB::White;
  leds[middle_top_left_corner + 10] = CRGB::White;
  leds[middle_top_left_corner] = CRGB::Black;
  leds[middle_top_right_corner] = CRGB::Black;
  FastLED.show();
  delay(320);
  LightSegment segment = LightSegment(leds, middle_top_middle-2, middle_top_middle+2);
  leds[middle_top_right_corner - 10] = CRGB::Black;
  leds[middle_top_left_corner + 10] = CRGB::Black;
  segment.fadeUp(5, CRGB::White);
  segment.fadeToBlack(2);

  for (int i = 0; i <= 3; i++){
    trace_upwards(leds, 3, 15, CRGB::Cyan);
  }

  trace_square_with_delays(leds, 5, 200, 15, CRGB::Cyan, CRGB::Cyan);

}

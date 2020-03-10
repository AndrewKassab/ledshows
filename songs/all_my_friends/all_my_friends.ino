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
  for (int i = 0; i <= 6; i++){
    alternate_sides_and_tops_with_alternating_corner_colors(leds, 560, CRGB::Red, CRGB::Purple);
    delay(560);
    allLights.turnOff();
  }
  
  alternate_sides_and_tops_with_alternating_corner_colors(leds, 560, CRGB::Red, CRGB::Purple);
  allLights.turnOff();
  delay(330);

  bridge();

  delay(570);

  for ( int i = 0; i <= 6; i++ ){
    square_side_cycle(leds, 560, CRGB::Blue, CRGB::Cyan, CRGB::Blue, CRGB::Cyan);
    delay(560);
  }

  square_side_cycle(leds, 560, CRGB::Blue, CRGB::Cyan, CRGB::Blue, CRGB::Cyan);
  delay(530);

  for ( int i = 0; i <= 3; i++ ){
    allLights.turnOff();
    corners_cycle_towards_center(leds, 550, CRGB::Purple, CRGB::DeepPink);
    delay(550);
  }

  bridge();

}


void bridge(){

  LightSegment allLights = get_all_lights(leds);

  FastLED.clear();
  allLights.fadeUp(1, CRGB::Cyan);

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
  square_color_trace(leds, 1, 11, CRGB::Green);
  square_color_trace(leds, 1, 11, CRGB::Red);
  delay(20);

  // duna na na naaaa
  leds[middle_bottom_left_corner] = CRGB::White;
  leds[middle_bottom_right_corner] = CRGB::White;
  FastLED.show();
  delay(220);
  leds[middle_bottom_right_corner - 10] = CRGB::White;
  leds[middle_bottom_left_corner + 10] = CRGB::White;
  FastLED.show();
  delay(270);
  leds[middle_top_left_corner] = CRGB::White;
  leds[middle_top_right_corner] = CRGB::White;
  FastLED.show();
  delay(260);
  leds[middle_top_right_corner - 10] = CRGB::White;
  leds[middle_top_left_corner + 10] = CRGB::White;
  FastLED.show();
  delay(300);
  LightSegment segment = LightSegment(leds, middle_top_middle-2, middle_top_middle+2);
  segment.setToColor(CRGB::White);
  FastLED.show();
  delay(320);
  allLights.fadeToBlack(12);

  squares_top_bottom_dash_left_right(leds, 13, CRGB::Red, CRGB::Blue);
  squares_top_bottom_dash_left_right(leds, 13, CRGB::DeepPink, CRGB::Purple);
  squares_top_bottom_dash_left_right(leds, 13, CRGB::Red, CRGB::Blue);
  squares_top_bottom_dash_left_right(leds, 13, CRGB::DeepPink, CRGB::Purple);

  trace_square_with_delays(leds, 5, 11, 55, CRGB::Cyan, CRGB::Cyan);

  LightSegment leftSquare = get_left_square(leds);
  LightSegment rightSquare = get_right_square(leds);
  SegmentList squares = SegmentList(&leftSquare);
  squares.add(&rightSquare);
  squares.setAllToColor(CRGB::Cyan);
  FastLED.show();

}

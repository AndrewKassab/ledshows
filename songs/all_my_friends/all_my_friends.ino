#include <LightShow.hpp> 

CRGB leds[NUM_LEDS];

// Constant ones
LightSegment * leftSquare;
LightSegment * leftSquareLeft;
LightSegment * leftSquareTop;
LightSegment * leftSquareRight;
LightSegment * leftSquareBottom;
LightSegment * rightSquare;
LightSegment * rightSquareTop;
LightSegment * rightSquareRight;
LightSegment * rightSquareLeft;
LightSegment * rightSquareBottom;
LightSegment * middleTop; 
LightSegment * middleLeft;
LightSegment * middleRight;
LightSegment * middleTopLeft;
LightSegment * middleTopRight;
LightSegment * rightBridge;
LightSegment * leftBridge;
LightSegment * allLights;
LightSegment * startLeftBridgeToMiddleTopLeft;
LightSegment * middleTopRightToRightBridgeEnd;

LightSegment * leftSquareLeftSideCenterFour; 
LightSegment * leftSquareRightSideCenterFour; 
LightSegment * leftSquareTopCenterFour;
LightSegment * leftSquareBottomCenterFour;
LightSegment * rightSquareLeftSideCenterFour;
LightSegment * rightSquareRightSideCenterFour;
LightSegment * rightSquareTopCenterFour;
LightSegment * rightSquareBottomCenterFour;

void setup(){
  default_setup(leds);
}

void loop(){

  delay(3100);

  trace_outwards_evenly(leds, middle_top_middle, 
                         (middle_top_middle-middle_top_left_corner+1), 5, 26, CRGB::Cyan);

  leftSquareLeft = get_left_square_left(leds);
  leftSquareTop = get_left_square_top(leds);
  leftSquareRight = get_left_square_right(leds);
  leftSquareBottom = get_left_square_bottom(leds);
  rightSquareTop = get_right_square_top(leds);
  rightSquareRight = get_right_square_right(leds);
  rightSquareLeft = get_right_square_left(leds);
  rightSquareBottom = get_right_square_bottom(leds);
  rightBridge = get_right_bridge(leds);
  leftBridge = get_left_bridge(leds);
  middleLeft = get_middle_left(leds);
  middleRight = get_middle_right(leds);
  middleTop = get_middle_top(leds);

  intro();

  free(rightBridge);
  free(leftBridge);

  delay(30);
  for (int i = 0; i <= 3; i++){
    squareCycle();
  }

  for (int i = 0; i <= 7; i++){
    verseCycle();
  }

  free(middleLeft);
  free(middleRight);
  free(leftSquareLeft);
  free(leftSquareTop);
  free(leftSquareRight);
  free(leftSquareBottom);
  free(rightSquareTop);
  free(rightSquareRight);
  free(rightSquareLeft);
  free(rightSquareBottom);

  allLights = get_all_lights(leds);
  FastLED.clear();
  SegmentList allLightsList = SegmentList(allLights);
  allLightsList.fadeAllIn(9, CRGB::Cyan);
  free(allLights);

  middleTopLeft = get_middle_top_left(leds);
  middleTopRight = get_middle_top_right(leds);
  startLeftBridgeToMiddleTopLeft = get_start_left_bridge_to_middle_top_left(leds);
  middleTopRightToRightBridgeEnd = get_middle_top_right_to_right_bridge_end(leds);
  leftSquareLeftSideCenterFour = get_left_square_left_center_with_offset(leds, 7);
  leftSquareRightSideCenterFour = get_left_square_right_center_with_offset(leds, 7);
  leftSquareTopCenterFour = get_left_square_top_center_with_offset(leds, 7);
  leftSquareBottomCenterFour = get_left_square_bottom_center_with_offset(leds, 7);
  rightSquareLeftSideCenterFour = get_right_square_left_center_with_offset(leds, 7);
  rightSquareRightSideCenterFour = get_right_square_right_center_with_offset(leds, 7);
  rightSquareTopCenterFour = get_right_square_top_center_with_offset(leds, 7);
  rightSquareBottomCenterFour = get_right_square_bottom_center_with_offset(leds, 7);
  rightSquare = get_right_square(leds);
  leftSquare = get_left_square(leds);

  bridge();

  free(middleTopLeft);
  free(middleTopRight);
  free(startLeftBridgeToMiddleTopLeft);
  free(middleTopRightToRightBridgeEnd);
  free(leftSquareLeftSideCenterFour);
  free(leftSquareRightSideCenterFour);
  free(leftSquareTopCenterFour);
  free(leftSquareBottomCenterFour);
  free(rightSquareLeftSideCenterFour);
  free(rightSquareRightSideCenterFour);
  free(rightSquareTopCenterFour);
  free(rightSquareBottomCenterFour);
  free(rightSquare);
  free(leftSquare);
  
  delay(10000);
}

void intro(){
  // All my friends are watching
  SegmentList setOne = SegmentList(leftSquareLeft);
  setOne.add(leftSquareRight);
  setOne.add(rightSquareRight);
  setOne.add(rightSquareLeft);
  setOne.fadeAllIn(16, CRGB::Cyan);
  // I can hear them talking
  SegmentList setTwo = SegmentList(leftSquareTop);
  setTwo.add(leftSquareBottom);
  setTwo.add(rightSquareBottom);
  setTwo.add(rightSquareTop);
  setTwo.fadeAllIn(16, CRGB::Cyan);
  // All my friends are watching 
  SegmentList setThree = SegmentList(middleLeft);
  setThree.add(middleRight);
  setThree.fadeAllIn(16, CRGB::Cyan);
  // I can hear them talking
  SegmentList setFour = SegmentList(middleTop);
  setFour.add(leftBridge);
  setFour.add(rightBridge);
  setFour.fadeAllIn(15, CRGB::Cyan);
}

void squareCycle(){
  FastLED.clear();
  leftSquareLeft->setToColor(CRGB::ForestGreen);
  rightSquareRight->setToColor(CRGB::ForestGreen);
  FastLED.show();
  delay(560);
  leftSquareLeft->turnOff();
  rightSquareRight->turnOff();
  leftSquareTop->setToColor(CRGB::DeepPink);
  rightSquareTop->setToColor(CRGB::DeepPink);
  FastLED.show();
  delay(560);
  leftSquareTop->turnOff();
  rightSquareTop->turnOff();
  leftSquareRight->setToColor(CRGB::ForestGreen);
  rightSquareLeft->setToColor(CRGB::ForestGreen);
  FastLED.show();
  delay(560);
  leftSquareRight->turnOff();
  rightSquareLeft->turnOff();
  leftSquareBottom->setToColor(CRGB::DeepPink);
  rightSquareBottom->setToColor(CRGB::DeepPink);
  FastLED.show();
  delay(560);
}

void verseCycle(){
  FastLED.clear();
  SegmentList squareLeftRight = SegmentList(leftSquareLeft);
  squareLeftRight.add(leftSquareRight);
  squareLeftRight.add(rightSquareRight);
  squareLeftRight.add(rightSquareLeft);
  SegmentList middleSides = SegmentList(middleLeft);
  middleSides.add(middleRight);
  SegmentList squareTopBottom = SegmentList(leftSquareTop);
  squareTopBottom.add(leftSquareBottom);
  squareTopBottom.add(rightSquareTop);
  squareTopBottom.add(rightSquareBottom);
  squareLeftRight.setAllToColor(CRGB::Red);
  light_all_corners(leds, CRGB::Purple);
  FastLED.show();
  delay(560);
  squareLeftRight.turnAllOff();
  middleTop->setToColor(CRGB::Purple);
  light_all_corners(leds, CRGB::Red);
  FastLED.show();
  delay(560);
  middleTop->turnOff();
  squareTopBottom.setAllToColor(CRGB::Purple);
  light_all_corners(leds, CRGB::Red);
  FastLED.show();
  delay(550);
  squareTopBottom.turnAllOff();
  middleSides.setAllToColor(CRGB::Red);
  light_all_corners(leds, CRGB::Purple);
  FastLED.show();
  delay(550);
}

void bridge(){

  // They
  SegmentList middleTopBars = SegmentList(middleTopLeft);
  middleTopBars.add(middleTopRight);
  boolean reverseTable[2] = {true, false};
  middleTopBars.traceAllAndRemain(2,6,reverseTable, CRGB::Black);

  delay(130);

  // Know
  SegmentList middleSidesToBridges = SegmentList(startLeftBridgeToMiddleTopLeft);
  middleSidesToBridges.add(middleTopRightToRightBridgeEnd);
  middleSidesToBridges.traceAllAndRemain(2,30,reverseTable, CRGB::Black);

  delay(180);

  // They're makin messes
  SegmentList squares = SegmentList(leftSquare);
  squares.add(rightSquare);
  squares.traceAllAndRemain(2, 1, reverseTable, CRGB::Red);
  squares.traceAllAndRemain(2, 1, reverseTable, CRGB::Blue);
  squares.traceAllAndRemain(2, 1, reverseTable, CRGB::Green);
  squares.traceAllAndRemain(2, 1, reverseTable, CRGB::Purple);

  delay(100);

  leds[middle_bottom_left_corner] = CRGB::White;
  leds[middle_bottom_right_corner] = CRGB::White;
  FastLED.show();
  delay(210);
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

  LightSegment * segment = new LightSegment(leds, middle_top_middle-2, middle_top_middle+2);
  SegmentList topmiddlearea = SegmentList(segment);
  leds[middle_top_right_corner - 10] = CRGB::Black;
  leds[middle_top_left_corner + 10] = CRGB::Black;
  topmiddlearea.fadeAllIn(10, CRGB::White);
}

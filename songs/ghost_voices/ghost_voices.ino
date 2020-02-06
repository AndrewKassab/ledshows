#include <LightShow.hpp>

CRGB leds[NUM_LEDS];

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
LightSegment * middleArch;
LightSegment * middleTop; 
LightSegment * middleLeft;
LightSegment * middleRight;
LightSegment * middleTopLeft;
LightSegment * middleTopRight;
LightSegment * rightBridge;
LightSegment * leftBridge;

// used for first pattern 
LightSegment * middleLeftMiddleBar;
LightSegment * middleRightMiddleBar;
LightSegment * middleTopLeftBar;
LightSegment * middleTopRightBar;

// user for 2nd pattern 
LightSegment * middleBottomLeftCornerArch;
LightSegment * middleBottomRightCornerArch;
LightSegment * middleTopLeftCornerArch;
LightSegment * middleTopRightCornerArch;
LightSegment * leftSquareBottomRightCornerSixBack;
LightSegment * leftSquareBottomRightCornerSixUp;
LightSegment * leftSquareBottomLeftCornerArch;
LightSegment * leftSquareTopLeftCornerArch;
LightSegment * leftSquareTopRightCornerArch;
LightSegment * rightSquareBottomRightCornerArch;
LightSegment * rightSquareBottomLeftCornerSixRight;
LightSegment * rightSquareBottomLeftCornerSixUp;
LightSegment * rightSquareTopLeftCornerArch;
LightSegment * rightSquareTopRightCornerArch;
LightSegment * middleTopMiddleBar;

void setup() {
  default_setup(leds);
  leftSquare = new LightSegment(leds, start, left_bottom_right_corner);
  leftSquareLeft = new LightSegment(leds, left_top_left_corner, left_bottom_left_corner);
  leftSquareTop = new LightSegment(leds, left_top_right_corner, left_top_left_corner-1);
  leftSquareRight = new LightSegment(leds, start, left_top_right_corner-1);
  leftSquareBottom = new LightSegment(leds, left_bottom_left_corner, left_bottom_right_corner);
  rightSquare = new LightSegment(leds, right_bottom_left_corner, end);
  rightSquareTop = new LightSegment(leds, right_top_right_corner, right_top_left_corner-1);
  rightSquareRight = new LightSegment(leds, right_bottom_right_corner, right_top_right_corner-1);
  rightSquareLeft = new LightSegment(leds, right_top_left_corner, end);
  rightSquareBottom = new LightSegment(leds, right_bottom_left_corner, right_bottom_right_corner-1);
  middleArch = new LightSegment(leds, middle_bottom_left_corner, middle_bottom_right_corner);
  middleTop = new LightSegment(leds, middle_top_left_corner, middle_top_right_corner);
  middleLeft = new LightSegment(leds, middle_bottom_left_corner, middle_top_left_corner);
  middleRight = new LightSegment(leds, middle_top_right_corner, middle_bottom_right_corner);
  middleTopLeft = new LightSegment(leds, middle_top_left_corner, middle_top_middle);
  middleTopRight = new LightSegment(leds, middle_top_middle, middle_top_right_corner);
  rightBridge = new LightSegment(leds, middle_bottom_right_corner, right_bottom_left_corner);
  leftBridge = new LightSegment(leds, left_bottom_right_corner, middle_bottom_left_corner);
  middleLeftMiddleBar = new LightSegment(leds, middle_bottom_left_corner+7, middle_bottom_left_corner+12);
  middleRightMiddleBar = new LightSegment(leds, middle_top_right_corner+7, middle_top_right_corner+12);
  middleTopLeftBar = new LightSegment(leds, middle_top_left_corner+7, middle_top_left_corner+12);
  middleTopRightBar = new LightSegment(leds, middle_top_middle + 7, middle_top_middle + 12);
  middleBottomLeftCornerArch = new LightSegment(leds, middle_bottom_left_corner-2, middle_bottom_left_corner+6);
  middleBottomRightCornerArch = new LightSegment(leds, middle_bottom_right_corner-6, middle_bottom_right_corner+2);
  middleTopLeftCornerArch = new LightSegment(leds, middle_top_left_corner-6, middle_top_left_corner+6);
  middleTopRightCornerArch = new LightSegment(leds,middle_top_right_corner-6, middle_top_right_corner+6);
  leftSquareBottomRightCornerSixBack = new LightSegment(leds,left_bottom_right_corner-6, left_bottom_right_corner);
  leftSquareBottomRightCornerSixUp = new LightSegment(leds, start, start+6);
  leftSquareBottomLeftCornerArch = new LightSegment(leds,left_bottom_left_corner-6, left_bottom_left_corner+6);
  leftSquareTopLeftCornerArch = new LightSegment(leds,left_top_left_corner-6, left_top_left_corner+6);
  leftSquareTopRightCornerArch = new LightSegment(leds,left_top_right_corner-6, left_top_right_corner+6);
  rightSquareBottomRightCornerArch = new LightSegment(leds,right_bottom_right_corner-6, right_bottom_right_corner+6);
  rightSquareBottomLeftCornerSixRight = new LightSegment(leds, right_bottom_left_corner, right_bottom_left_corner+6);
  rightSquareBottomLeftCornerSixUp = new LightSegment(leds, end-6, end);
  rightSquareTopLeftCornerArch = new LightSegment(leds,right_top_left_corner - 6, right_top_left_corner+6);
  rightSquareTopRightCornerArch = new LightSegment(leds,right_top_right_corner - 6, right_top_right_corner+6);
  middleTopMiddleBar = new LightSegment(leds, middle_top_middle-5, middle_top_middle+5);
}

void loop() {

  delay(2850);

  for (int i = 0; i < 7; i++){
    first_pattern();
  }

  leftSquareLeft->setToColor(CRGB::Turquoise);
  leftSquareRight->setToColor(CRGB::Turquoise);
  rightSquareLeft->setToColor(CRGB::Turquoise);
  rightSquareRight->setToColor(CRGB::Turquoise);
  FastLED.show();
  delay(200);
  leftSquareLeft->turnOff();
  leftSquareRight->turnOff();
  rightSquareRight->turnOff();
  rightSquareLeft->turnOff();
  FastLED.show();
  delay(150);
  leftSquareBottom->setToColor(CRGB::MediumVioletRed);
  rightSquareBottom->setToColor(CRGB::MediumVioletRed);
  FastLED.show();
  delay(260);
  leftSquareTop->setToColor(CRGB::MediumVioletRed);
  rightSquareTop->setToColor(CRGB::MediumVioletRed);
  FastLED.show();
  delay(400);
  middleLeftMiddleBar->setToColor(CRGB::Fuchsia);
  middleRightMiddleBar->setToColor(CRGB::Fuchsia);
  FastLED.show();
  delay(420);
  middleTop->setColorFieldsOnly(CRGB::Fuchsia);
  middleTop->traceOneColorFromBothEnds(3, 5);
  FastLED.clear();
  FastLED.show();

  delay(110);

  for ( int i = 0; i <= 7; i++){
    second_pattern();
  }

  for ( int i = 0; i <= 7; i++){
    first_pattern();
  }

}

void first_pattern(){
  leftSquareLeft->setToColor(CRGB::Turquoise);
  leftSquareRight->setToColor(CRGB::Turquoise);
  rightSquareLeft->setToColor(CRGB::Turquoise);
  rightSquareRight->setToColor(CRGB::Turquoise);
  FastLED.show();
  delay(200);
  leftSquareLeft->turnOff();
  leftSquareRight->turnOff();
  rightSquareRight->turnOff();
  rightSquareLeft->turnOff();
  FastLED.show();
  delay(150);
  leftSquareBottom->setToColor(CRGB::MediumBlue);
  rightSquareBottom->setToColor(CRGB::MediumBlue);
  FastLED.show();
  delay(260);
  leftSquareTop->setToColor(CRGB::MediumBlue);
  rightSquareTop->setToColor(CRGB::MediumBlue);
  FastLED.show();
  delay(400);
  middleLeftMiddleBar->setToColor(CRGB::Fuchsia);
  middleRightMiddleBar->setToColor(CRGB::Fuchsia);
  FastLED.show();
  delay(420);
  middleTopLeftBar->setToColor(CRGB::Fuchsia);
  middleTopRightBar->setToColor(CRGB::Fuchsia);
  FastLED.show();
  delay(330);
  middleLeftMiddleBar->turnOff();
  middleRightMiddleBar->turnOff();
  middleTopLeftBar->turnOff();
  middleTopRightBar->turnOff();
  leftSquareTop->turnOff();
  leftSquareBottom->turnOff();
  rightSquareTop->turnOff();
  rightSquareBottom->turnOff();
  FastLED.show();
  delay(190);
}

void second_pattern(){
  middleBottomLeftCornerArch->setToColor(CRGB::Turquoise);
  leftSquareTopLeftCornerArch->setToColor(CRGB::Turquoise);
  middleBottomRightCornerArch->setToColor(CRGB::Turquoise);
  rightSquareTopRightCornerArch->setToColor(CRGB::Turquoise);
  FastLED.show();
  delay(200);
  middleBottomLeftCornerArch->turnOff();
  leftSquareTopLeftCornerArch->turnOff();
  middleBottomRightCornerArch->turnOff();
  rightSquareTopRightCornerArch->turnOff();
  FastLED.show();
  delay(140);
  leftSquareBottomLeftCornerArch->setToColor(CRGB::MediumVioletRed);
  leftSquareTopRightCornerArch->setToColor(CRGB::MediumVioletRed);
  rightSquareBottomRightCornerArch->setToColor(CRGB::MediumVioletRed);
  rightSquareTopLeftCornerArch->setToColor(CRGB::MediumVioletRed);
  middleLeftMiddleBar->setToColor(CRGB::MediumVioletRed);
  middleRightMiddleBar->setToColor(CRGB::MediumVioletRed);
  FastLED.show();
  delay(250);
  leftSquareBottomLeftCornerArch->turnOff();
  leftSquareTopRightCornerArch->turnOff();
  rightSquareBottomRightCornerArch->turnOff();
  rightSquareTopLeftCornerArch->turnOff();
  middleLeftMiddleBar->turnOff();
  middleRightMiddleBar->turnOff();
  leftSquareTopLeftCornerArch->setToColor(CRGB::MediumVioletRed);
  leftSquareBottomRightCornerSixBack->setToColor(CRGB::MediumVioletRed);
  leftSquareBottomRightCornerSixUp->setToColor(CRGB::MediumVioletRed);
  middleTopLeftCornerArch->setToColor(CRGB::MediumVioletRed);
  middleTopRightCornerArch->setToColor(CRGB::MediumVioletRed);
  rightSquareTopRightCornerArch->setToColor(CRGB::MediumVioletRed);
  rightSquareBottomLeftCornerSixRight->setToColor(CRGB::MediumVioletRed);
  rightSquareBottomLeftCornerSixUp->setToColor(CRGB::MediumVioletRed);
  FastLED.show();
  delay(400);
  middleTopMiddleBar->setToColor(CRGB::Fuchsia);
  FastLED.show();
  delay(420);
  middleBottomLeftCornerArch->setToColor(CRGB::Blue);
  middleBottomRightCornerArch->setToColor(CRGB::Blue);
  middleTopLeftCornerArch->turnOff();
  middleTopRightCornerArch->turnOff();
  FastLED.show();
  delay(330);
  middleBottomLeftCornerArch->turnOff();
  middleBottomRightCornerArch->turnOff();
  middleTopMiddleBar->turnOff();
  middleTopLeftCornerArch->turnOff();
  middleTopRightCornerArch->turnOff();
  leftSquareBottomRightCornerSixBack->turnOff();
  leftSquareBottomRightCornerSixUp->turnOff();
  rightSquareBottomLeftCornerSixRight->turnOff();
  rightSquareBottomLeftCornerSixUp->turnOff();
  rightSquareTopRightCornerArch->turnOff();
  leftSquareTopLeftCornerArch->turnOff();
  leftSquareBottomRightCornerSixBack->turnOff();
  leftSquareBottomRightCornerSixUp->turnOff();
  rightSquareBottomLeftCornerSixRight->turnOff();
  rightSquareBottomLeftCornerSixUp->turnOff();
  FastLED.show();
  delay(190);
}

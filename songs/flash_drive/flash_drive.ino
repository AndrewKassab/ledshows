#include <sequences.hpp>

CRGB leds[NUM_LEDS];

void setup(){
  default_setup(leds);
}

void loop(){

  LightSegment allLights = get_all_lights(leds);
  allLights.turnOff();
  FastLED.show();
  FastLED.setBrightness(150);

  // TODO: intro
  delay(12050);

  int delayTime = 250;

  // 0:11 boop boop boop boop
  leds[right_bottom_left_corner] = CRGB::Red;
  leds[left_bottom_right_corner] = CRGB::Red;
  FastLED.show();
  delay(delayTime);
  leds[right_bottom_right_corner] = CRGB::Red;
  leds[left_bottom_left_corner] = CRGB::Red;
  FastLED.show();
  delay(delayTime);
  leds[right_top_right_corner] = CRGB::Red;
  leds[left_top_left_corner] = CRGB::Red;
  FastLED.show();
  delay(delayTime);
  leds[right_top_left_corner] = CRGB::Red;
  leds[left_top_right_corner] = CRGB::Red;
  FastLED.show();

  delay(4600);

  // 0:17 beep beep beep beep
  leds[left_top_right_corner + 6] = CRGB::Red;
  leds[right_top_right_corner + 13] = CRGB:: Red;
  FastLED.show();
  delay(delayTime);
  leds[left_top_right_corner + 13] = CRGB::Red;
  leds[right_top_right_corner + 6] = CRGB:: Red;
  FastLED.show();
  delay(delayTime);
  leds[left_bottom_left_corner + 7] = CRGB::Red;
  leds[right_bottom_right_corner - 14] = CRGB:: Red;
  FastLED.show();
  delay(delayTime);
  leds[left_bottom_left_corner + 14] = CRGB::Red;
  leds[right_bottom_right_corner - 7] = CRGB:: Red;
  FastLED.show();

  delay(1000);

  // 0:18 beep beep beep beep
  leds[left_top_right_corner - 6] = CRGB::Red;
  leds[right_top_right_corner - 13] = CRGB:: Red;
  FastLED.show();
  delay(delayTime);
  leds[left_top_right_corner - 13] = CRGB::Red;
  leds[right_top_right_corner - 6] = CRGB:: Red;
  FastLED.show();
  delay(delayTime);
  leds[left_bottom_left_corner - 7] = CRGB::Red;
  leds[right_top_left_corner + 6] = CRGB:: Red;
  FastLED.show();
  delay(delayTime);
  leds[left_bottom_left_corner - 14] = CRGB::Red;
  leds[right_top_left_corner + 13] = CRGB:: Red;
  FastLED.show();

  delay(1700);

  delayTime = 175;

  leds[middle_bottom_left_corner] = CRGB::Red;
  leds[middle_bottom_right_corner] = CRGB::Red;
  FastLED.show();
  delay(delayTime);
  leds[middle_bottom_left_corner + 10] = CRGB::Red;
  leds[middle_bottom_right_corner - 10] = CRGB::Red;
  FastLED.show();
  delay(delayTime);
  leds[middle_top_left_corner] = CRGB::Red;
  leds[middle_top_right_corner] = CRGB::Red;
  FastLED.show();

  delay(300);
  leds[middle_top_left_corner + 10] = CRGB::Red;
  leds[middle_top_right_corner - 10] = CRGB::Red;
  FastLED.show();
  delay(250);
  leds[middle_top_middle] = CRGB::Red;
  FastLED.show();
  
  delay(1000);

  int r = 255;
  int b = 0;
  int g = 0;

  // rainbow lights when bridge hits
  for (int i = 0; i < 180 ; i++){
    if(r > 0 && b <= 0){
      r = r - 3;
      g = g + 3;
    }
    if(g > 0 && r <= 0){
      g = g - 3;
      b = b + 3;
    }
    if(b > 0 && g <= 0){
      r = r + 3;
      b = b - 3;
    }

    leds[right_bottom_left_corner] = CRGB(r,g,b);
    leds[left_bottom_right_corner] = CRGB(r,g,b);
    leds[right_bottom_right_corner] = CRGB(r,g,b);
    leds[left_bottom_left_corner] = CRGB(r,g,b);
    leds[right_top_right_corner] = CRGB(r,g,b);
    leds[left_top_left_corner] = CRGB(r,g,b);
    leds[right_top_left_corner] = CRGB(r,g,b);
    leds[left_top_right_corner] = CRGB(r,g,b);
    leds[left_top_right_corner + 6] = CRGB(r,g,b);
    leds[right_top_right_corner + 13] = CRGB(r,g,b);
    leds[left_top_right_corner + 13] = CRGB(r,g,b);
    leds[right_top_right_corner + 6] = CRGB(r,g,b);
    leds[left_bottom_left_corner + 7] = CRGB(r,g,b);
    leds[right_bottom_right_corner - 14] = CRGB(r,g,b);
    leds[left_bottom_left_corner + 14] = CRGB(r,g,b);
    leds[right_bottom_right_corner - 7] = CRGB(r,g,b);
    leds[left_top_right_corner - 6] = CRGB(r,g,b);
    leds[right_top_right_corner - 13] = CRGB(r,g,b);
    leds[left_top_right_corner - 13] = CRGB(r,g,b);
    leds[right_top_right_corner - 6] = CRGB(r,g,b);
    leds[left_bottom_left_corner - 7] = CRGB(r,g,b);
    leds[right_top_left_corner + 6] = CRGB(r,g,b);
    leds[left_bottom_left_corner - 14] = CRGB(r,g,b);
    leds[right_top_left_corner + 13] = CRGB(r,g,b);
    leds[middle_bottom_left_corner] = CRGB(r,g,b);
    leds[middle_bottom_right_corner] = CRGB(r,g,b);
    leds[middle_bottom_left_corner + 10] = CRGB(r,g,b);
    leds[middle_bottom_right_corner - 10] = CRGB(r,g,b);
    leds[middle_top_left_corner] = CRGB(r,g,b);
    leds[middle_top_right_corner] = CRGB(r,g,b);
    leds[middle_top_left_corner + 10] = CRGB(r,g,b);
    leds[middle_top_right_corner - 10] = CRGB(r,g,b);
    leds[middle_top_middle] = CRGB(r,g,b);
    FastLED.show();
  }
  delay(950);

  delayTime = 250;

  // 0:25
  leds[left_top_right_corner] = CRGB::Black;
  leds[left_bottom_left_corner] = CRGB::Black;
  leds[right_top_left_corner] = CRGB::Black;
  leds[right_bottom_right_corner] = CRGB::Black;
  FastLED.show();
  delay(delayTime);
  leds[left_top_left_corner] = CRGB::Black;
  leds[left_bottom_right_corner] = CRGB::Black;
  leds[right_top_right_corner] = CRGB::Black;
  leds[right_bottom_left_corner] = CRGB::Black;
  FastLED.show();
  delay(delayTime);
  leds[left_top_right_corner] = CRGB(r,g,b);
  leds[left_bottom_left_corner] = CRGB(r,g,b);
  leds[right_top_left_corner] = CRGB(r,g,b);
  leds[right_bottom_right_corner] = CRGB(r,g,b);
  leds[left_top_left_corner] = CRGB(r,g,b);
  leds[left_bottom_right_corner] = CRGB(r,g,b);
  leds[right_top_right_corner] = CRGB(r,g,b);
  leds[right_bottom_left_corner] = CRGB(r,g,b);
  leds[left_top_right_corner] = CRGB(r,g,b);
  leds[left_bottom_left_corner] = CRGB(r,g,b);
  leds[right_top_left_corner] = CRGB(r,g,b);
  leds[right_bottom_right_corner] = CRGB(r,g,b);
  leds[left_top_left_corner] = CRGB(r,g,b);
  leds[left_bottom_right_corner] = CRGB(r,g,b);
  leds[right_top_right_corner] = CRGB(r,g,b);
  leds[right_bottom_left_corner] = CRGB(r,g,b);
  leds[left_top_right_corner - 6] = CRGB::Black;
  leds[right_top_right_corner - 13] = CRGB:: Black;
  leds[left_top_right_corner - 13] = CRGB::Black;
  leds[right_top_right_corner - 6] = CRGB:: Black;
  leds[left_bottom_left_corner - 7] = CRGB::Black;
  leds[right_top_left_corner + 6] = CRGB:: Black;
  leds[left_bottom_left_corner - 14] = CRGB::Black;
  leds[right_top_left_corner + 13] = CRGB:: Black;
  leds[left_top_right_corner + 6] = CRGB::Black;
  leds[right_top_right_corner + 13] = CRGB:: Black;
  leds[left_top_right_corner + 13] = CRGB::Black;
  leds[right_top_right_corner + 6] = CRGB:: Black;
  leds[left_bottom_left_corner + 7] = CRGB::Black;
  leds[right_bottom_right_corner - 14] = CRGB:: Black;
  leds[left_bottom_left_corner + 14] = CRGB::Black;
  leds[right_bottom_right_corner - 7] = CRGB:: Black;
  FastLED.show();
  delay(delayTime);
  leds[left_top_right_corner] = CRGB::Black;
  leds[left_bottom_left_corner] = CRGB::Black;
  leds[right_top_left_corner] = CRGB::Black;
  leds[right_bottom_right_corner] = CRGB::Black;
  leds[left_top_left_corner] = CRGB::Black;
  leds[left_bottom_right_corner] = CRGB::Black;
  leds[right_top_right_corner] = CRGB::Black;
  leds[right_bottom_left_corner] = CRGB::Black;
  leds[left_top_right_corner - 6] = CRGB(r,g,b);
  leds[right_top_right_corner - 13] = CRGB(r,g,b);
  leds[left_top_right_corner - 13] = CRGB(r,g,b);
  leds[right_top_right_corner - 6] = CRGB(r,g,b);
  leds[left_bottom_left_corner - 7] = CRGB(r,g,b);
  leds[right_top_left_corner + 6] = CRGB(r,g,b);
  leds[left_bottom_left_corner - 14] = CRGB(r,g,b);
  leds[right_top_left_corner + 13] = CRGB(r,g,b);
  leds[left_top_right_corner + 6] = CRGB(r,g,b);
  leds[right_top_right_corner + 13] = CRGB(r,g,b);
  leds[left_top_right_corner + 13] = CRGB(r,g,b);
  leds[right_top_right_corner + 6] = CRGB(r,g,b);
  leds[left_bottom_left_corner + 7] = CRGB(r,g,b);
  leds[right_bottom_right_corner - 14] = CRGB(r,g,b);
  leds[left_bottom_left_corner + 14] = CRGB(r,g,b);
  leds[right_bottom_right_corner - 7] = CRGB(r,g,b);
  FastLED.show();

  delay(4650);
  delayTime = 250;

  // 0:31
  leds[left_top_right_corner] = CRGB(r,g,b);
  leds[left_bottom_left_corner] = CRGB(r,g,b);
  leds[right_top_left_corner] = CRGB(r,g,b);
  leds[right_bottom_right_corner] = CRGB(r,g,b);
  leds[left_top_left_corner] = CRGB(r,g,b);
  leds[left_bottom_right_corner] = CRGB(r,g,b);
  leds[right_top_right_corner] = CRGB(r,g,b);
  leds[right_bottom_left_corner] = CRGB(r,g,b);
  leds[left_top_right_corner - 6] = CRGB::Black;
  leds[right_top_right_corner - 13] = CRGB::Black;
  leds[left_top_right_corner - 13] = CRGB::Black;
  leds[right_top_right_corner - 6] = CRGB::Black;
  leds[left_bottom_left_corner - 7] = CRGB::Black;
  leds[right_top_left_corner + 6] = CRGB::Black;
  leds[left_bottom_left_corner - 14] = CRGB::Black;
  leds[right_top_left_corner + 13] = CRGB::Black;
  leds[left_top_right_corner + 6] = CRGB::Black;
  leds[right_top_right_corner + 13] = CRGB::Black;
  leds[left_top_right_corner + 13] = CRGB::Black;
  leds[right_top_right_corner + 6] = CRGB::Black;
  leds[left_bottom_left_corner + 7] = CRGB::Black;
  leds[right_bottom_right_corner - 14] = CRGB::Black;
  leds[left_bottom_left_corner + 14] = CRGB::Black;
  leds[right_bottom_right_corner - 7] = CRGB::Black;
  FastLED.show();
  delay(delayTime);
  leds[middle_bottom_left_corner] = CRGB::Black;
  leds[middle_bottom_right_corner] = CRGB::Black;
  leds[middle_top_left_corner] = CRGB::Black;
  leds[middle_top_right_corner] = CRGB::Black;
  FastLED.show();
  delay(delayTime);
  leds[middle_top_left_corner + 10] = CRGB::Black;
  leds[middle_top_right_corner - 10] = CRGB::Black;
  leds[middle_top_middle] = CRGB::Black;
  leds[middle_bottom_left_corner + 10] = CRGB::Black;
  leds[middle_bottom_right_corner - 10] = CRGB::Black;
  leds[middle_bottom_left_corner] = CRGB(r,g,b);
  leds[middle_bottom_right_corner] = CRGB(r,g,b);
  leds[middle_top_left_corner] = CRGB(r,g,b);
  leds[middle_top_right_corner] = CRGB(r,g,b);
  leds[left_top_right_corner] = CRGB::Black;
  leds[left_bottom_left_corner] = CRGB::Black;
  leds[right_top_left_corner] = CRGB::Black;
  leds[right_bottom_right_corner] = CRGB::Black;
  leds[left_top_left_corner] = CRGB::Black;
  leds[left_bottom_right_corner] = CRGB::Black;
  leds[right_top_right_corner] = CRGB::Black;
  leds[right_bottom_left_corner] = CRGB::Black;
  leds[left_top_right_corner - 6] = CRGB(r,g,b);
  leds[right_top_right_corner - 13] = CRGB(r,g,b);
  leds[left_top_right_corner - 13] = CRGB(r,g,b);
  leds[right_top_right_corner - 6] = CRGB(r,g,b);
  leds[left_bottom_left_corner - 7] = CRGB(r,g,b);
  leds[right_top_left_corner + 6] = CRGB(r,g,b);
  leds[left_bottom_left_corner - 14] = CRGB(r,g,b);
  leds[right_top_left_corner + 13] = CRGB(r,g,b);
  leds[left_top_right_corner + 6] = CRGB(r,g,b);
  leds[right_top_right_corner + 13] = CRGB(r,g,b);
  leds[left_top_right_corner + 13] = CRGB(r,g,b);
  leds[right_top_right_corner + 6] = CRGB(r,g,b);
  leds[left_bottom_left_corner + 7] = CRGB(r,g,b);
  leds[right_bottom_right_corner - 14] = CRGB(r,g,b);
  leds[left_bottom_left_corner + 14] = CRGB(r,g,b);
  leds[right_bottom_right_corner - 7] = CRGB(r,g,b);
  FastLED.show();
  delay(delayTime);
  leds[middle_top_left_corner + 10] = CRGB(r,g,b);
  leds[middle_top_right_corner - 10] = CRGB(r,g,b);
  leds[middle_top_middle] = CRGB(r,g,b);
  leds[middle_bottom_left_corner + 10] = CRGB(r,g,b);
  leds[middle_bottom_right_corner - 10] = CRGB(r,g,b);
  leds[middle_bottom_left_corner] = CRGB::Black;
  leds[middle_bottom_right_corner] = CRGB::Black;
  leds[middle_top_left_corner] = CRGB::Black;
  leds[middle_top_right_corner] = CRGB::Black;
  leds[left_top_right_corner] = CRGB(r,g,b);
  leds[left_bottom_left_corner] = CRGB(r,g,b);
  leds[right_top_left_corner] = CRGB(r,g,b);
  leds[right_bottom_right_corner] = CRGB(r,g,b);
  leds[left_top_left_corner] = CRGB(r,g,b);
  leds[left_bottom_right_corner] = CRGB(r,g,b);
  leds[right_top_right_corner] = CRGB(r,g,b);
  leds[right_bottom_left_corner] = CRGB(r,g,b);
  leds[left_top_right_corner - 6] = CRGB::Black;
  leds[right_top_right_corner - 13] = CRGB::Black;
  leds[left_top_right_corner - 13] = CRGB::Black;
  leds[right_top_right_corner - 6] = CRGB::Black;
  leds[left_bottom_left_corner - 7] = CRGB::Black;
  leds[right_top_left_corner + 6] = CRGB::Black;
  leds[left_bottom_left_corner - 14] = CRGB::Black;
  leds[right_top_left_corner + 13] = CRGB::Black;
  leds[left_top_right_corner + 6] = CRGB::Black;
  leds[right_top_right_corner + 13] = CRGB::Black;
  leds[left_top_right_corner + 13] = CRGB::Black;
  leds[right_top_right_corner + 6] = CRGB::Black;
  leds[left_bottom_left_corner + 7] = CRGB::Black;
  leds[right_bottom_right_corner - 14] = CRGB::Black;
  leds[left_bottom_left_corner + 14] = CRGB::Black;
  leds[right_bottom_right_corner - 7] = CRGB::Black;
  FastLED.show();
  delay(1000);

  // 0:33

  leds[left_top_left_corner + 10] = CRGB(r,g,b);
  leds[left_top_right_corner - 10] = CRGB(r,g,b);
  leds[left_top_right_corner + 10] = CRGB(r,g,b);
  leds[left_bottom_left_corner + 10] = CRGB(r,g,b);
  leds[right_top_left_corner + 10] = CRGB(r,g,b);
  leds[right_top_right_corner - 10] = CRGB(r,g,b);
  leds[right_top_right_corner + 10] = CRGB(r,g,b);
  leds[right_bottom_left_corner + 10] = CRGB(r,g,b);
  leds[left_top_right_corner] = CRGB::Black;
  leds[left_bottom_left_corner] = CRGB::Black;
  leds[right_top_left_corner] = CRGB::Black;
  leds[right_bottom_right_corner] = CRGB::Black;
  leds[left_top_left_corner] = CRGB::Black;
  leds[left_bottom_right_corner] = CRGB::Black;
  leds[right_top_right_corner] = CRGB::Black;
  leds[right_bottom_left_corner] = CRGB::Black;
  FastLED.show();
  delay(delayTime);
  leds[middle_bottom_left_corner] = CRGB(r,g,b);
  leds[middle_bottom_right_corner] = CRGB(r,g,b);
  leds[left_bottom_left_corner] = CRGB(r,g,b);
  leds[left_bottom_right_corner] = CRGB(r,g,b);
  leds[right_bottom_left_corner] = CRGB(r,g,b);
  leds[right_bottom_right_corner] = CRGB(r,g,b);
  FastLED.show();
  delay(delayTime);
  leds[middle_top_left_corner] = CRGB(r,g,b);
  leds[middle_top_right_corner] = CRGB(r,g,b);
  leds[left_top_left_corner] = CRGB(r,g,b);
  leds[left_top_right_corner] = CRGB(r,g,b);
  leds[right_top_left_corner] = CRGB(r,g,b);
  leds[right_top_right_corner] = CRGB(r,g,b);
  FastLED.show();
  delay(delayTime);
  leds[middle_bottom_left_corner] = CRGB::Black;
  leds[middle_bottom_right_corner] = CRGB::Black;
  leds[left_bottom_left_corner] = CRGB::Black;
  leds[left_bottom_right_corner] = CRGB::Black;
  leds[right_bottom_left_corner] = CRGB::Black;
  leds[right_bottom_right_corner] = CRGB::Black;
  leds[middle_top_left_corner] = CRGB::Black;
  leds[middle_top_right_corner] = CRGB::Black;
  leds[left_top_left_corner] = CRGB::Black;
  leds[left_top_right_corner] = CRGB::Black;
  leds[right_top_left_corner] = CRGB::Black;
  leds[right_top_right_corner] = CRGB::Black;
  FastLED.show();

  delay(1700);

  delayTime = 175;
  
  // 0:35
  leds[left_top_right_corner] = CRGB(r,g,b);
  leds[right_top_left_corner] = CRGB(r,g,b);
  FastLED.show();
  delay(delayTime);
  leds[left_top_left_corner] = CRGB(r,g,b);
  leds[right_top_right_corner] = CRGB(r,g,b);
  FastLED.show();
  delay(delayTime);
  leds[left_bottom_left_corner] = CRGB(r,g,b);
  leds[right_bottom_right_corner] = CRGB(r,g,b);
  FastLED.show();
  delay(300);
  leds[left_bottom_right_corner] = CRGB(r,g,b);
  leds[right_bottom_left_corner] = CRGB(r,g,b);
  FastLED.show();
  delay(250);
  leds[left_top_left_corner + 10] = CRGB::Black;
  leds[left_top_right_corner - 10] = CRGB::Black;
  leds[left_top_right_corner + 10] = CRGB::Black;
  leds[left_bottom_left_corner + 10] = CRGB::Black;
  leds[right_top_left_corner + 10] = CRGB::Black;
  leds[right_top_right_corner - 10] = CRGB::Black;
  leds[right_top_right_corner + 10] = CRGB::Black;
  leds[right_bottom_left_corner + 10] = CRGB::Black;
  leds[middle_bottom_left_corner] = CRGB(r,g,b);
  leds[middle_bottom_right_corner] = CRGB(r,g,b);
  leds[left_bottom_left_corner] = CRGB(r,g,b);
  leds[left_bottom_right_corner] = CRGB(r,g,b);
  leds[right_bottom_left_corner] = CRGB(r,g,b);
  leds[right_bottom_right_corner] = CRGB(r,g,b);
  leds[middle_top_left_corner] = CRGB(r,g,b);
  leds[middle_top_right_corner] = CRGB(r,g,b);
  leds[middle_top_left_corner + 10] = CRGB::Black;
  leds[middle_top_right_corner - 10] = CRGB::Black;
  leds[middle_top_middle] = CRGB::Black;
  leds[middle_bottom_left_corner + 10] = CRGB::Black;
  leds[middle_bottom_right_corner - 10] = CRGB::Black;
  FastLED.show();
  delay(530);
  leds[middle_top_left_corner + 10] = CRGB(r,g,b);
  leds[middle_top_right_corner - 10] = CRGB(r,g,b);
  leds[middle_top_middle] = CRGB(r,g,b);
  leds[middle_bottom_left_corner + 10] = CRGB(r,g,b);
  leds[middle_bottom_right_corner - 10] = CRGB(r,g,b);
  leds[left_top_left_corner + 10] = CRGB(r,g,b);
  leds[left_top_right_corner - 10] = CRGB(r,g,b);
  leds[left_top_right_corner + 10] = CRGB(r,g,b);
  leds[left_bottom_left_corner + 10] = CRGB(r,g,b);
  leds[right_top_left_corner + 10] = CRGB(r,g,b);
  leds[right_top_right_corner - 10] = CRGB(r,g,b);
  leds[right_top_right_corner + 10] = CRGB(r,g,b);
  leds[right_bottom_left_corner + 10] = CRGB(r,g,b);
  FastLED.show();
  delay(300);
  allLights.turnOff();
  FastLED.show();
  delay(150);

  // 0:38
  fourBeatLoop();

  CRGB colorOne = CRGB::Blue;
  CRGB colorTwo = CRGB::Red;

  // 0:44
  // TODO: Figure out required number of iterations
  for (int i = 0; i < 50; i++ ) {
    for (int j = 0; j < sizeof(leds)/sizeof(leds[0]); j++) {
      if (j % 2 == 0) {
        leds[j] = colorOne;
      } else {
        leds[j] = colorTwo;
      }
    }
    FastLED.show();
    /*colorTwo = colorOne;
    switch(colorOne) {
      case CRGB::Blue:
        colorOne = CRGB::Gold;
        break; 
      case CRGB::Gold:
        colorOne = CRGB::Green;
        break;
      case CRGB::Green:
        colorOne = CRGB::Pink;
        break;
      case CRGB::Pink:
        colorOne = CRGB::Cyan;
        break;
      case CRGB::Cyan:
        colorOne = CRGB::Purple;
        break;
      case CRGB::Purple:
        colorOne = CRGB::White;
        break;
    }
    */
    colorTwo = colorOne;
    colorOne = (colorOne == CRGB::Blue) ? CRGB::Red : CRGB::Blue;
    delay(50-i);
  }

  // 0:50
  rightBeforeDrop();

  // WHEEW 0:51
  traceOutMiddleTop();

  delay(20000);

}

// For 0:38
void fourBeatLoop() {
  // Set one
  LightSegment leftSquareLeft = get_left_square_left(leds);
  LightSegment rightSquareRight = get_right_square_right(leds);
  LightSegment middleLeft = get_middle_left(leds);
  LightSegment middleRight = get_middle_right(leds);
  SegmentList setOne = SegmentList(&leftSquareLeft);
  setOne.add(&rightSquareRight);
  setOne.add(&middleLeft);
  setOne.add(&middleRight);

  // Set two
  LightSegment leftSquareRight = get_left_square_right(leds);
  LightSegment rightSquareLeft = get_right_square_left(leds);
  SegmentList setTwo = SegmentList(&leftSquareRight);
  setTwo.add(&rightSquareLeft);

  // Set Three 
  LightSegment leftBridge = get_left_bridge(leds);
  LightSegment rightBridge = get_right_bridge(leds);
  LightSegment middleTop = get_middle_top(leds);
  SegmentList setThree = SegmentList(&leftBridge);
  setThree.add(&rightBridge);
  setThree.add(&middleTop);

  // Set Four 
  LightSegment leftSquareTop = get_left_square_top(leds);
  LightSegment leftSquareBottom = get_left_square_bottom(leds);
  LightSegment rightSquareTop = get_right_square_top(leds);
  LightSegment rightSquareBottom = get_right_square_bottom(leds);
  SegmentList setFour = SegmentList(&rightSquareBottom);
  setFour.add(&rightSquareTop);
  setFour.add(&leftSquareBottom);
  setFour.add(&leftSquareTop);

  LightSegment allLights = get_all_lights(leds);


  // TODO: Update color scheme
  int delayTime = 450;
  for (int i = 0; i <= 2; i++) {
    setFour.turnAllOff();
    setOne.setAllToColor(CRGB::Purple);
    FastLED.show();
    delay(delayTime);
    setOne.turnAllOff();
    setTwo.setAllToColor(CRGB::Purple);
    FastLED.show();
    delay(delayTime);
    setTwo.turnAllOff();
    setThree.setAllToColor(CRGB::Purple);
    FastLED.show();
    delay(delayTime);
    setThree.turnAllOff();
    setFour.setAllToColor(CRGB::Purple);
    FastLED.show();
    delay(delayTime);
  }

  setFour.turnAllOff();
  setOne.setAllToColor(CRGB::Purple);
  FastLED.show();
  delay(delayTime);
  setOne.turnAllOff();
  setTwo.setAllToColor(CRGB::Purple);
  FastLED.show();
  delay(delayTime);
  setTwo.turnAllOff();
  setThree.setAllToColor(CRGB::Purple);
  FastLED.show();
  delay(delayTime);
  allLights.setToColor(CRGB::Purple);
  FastLED.show();

}

void rightBeforeDrop() {
  get_all_lights(leds).turnOff();

  LightSegment leftSquareRight = get_left_square_right(leds);
  LightSegment rightSquareLeft = get_right_square_left(leds);

  LightSegment leftSquareTop = get_left_square_top(leds);
  LightSegment rightSquareTop = get_right_square_top(leds);

  LightSegment leftSquareLeft = get_left_square_left(leds);
  LightSegment rightSquareRight = get_right_square_right(leds);

  LightSegment leftSquareBottom = get_left_square_bottom(leds);
  LightSegment rightSquareBottom = get_right_square_bottom(leds);

  LightSegment middleLeftMiddle = LightSegment(leds, middle_bottom_left_corner + 5, middle_bottom_left_corner + 15);
  LightSegment middleRightMiddle = LightSegment(leds, middle_top_right_corner + 5, middle_top_right_corner + 15);

  CRGB color = CRGB::Purple;
  // TODO: Decide color later
  leftSquareRight.setToColor(color);
  rightSquareLeft.setToColor(color);
  FastLED.show();
  delay(375);
  leftSquareTop.setToColor(color);
  rightSquareTop.setToColor(color);
  FastLED.show();
  delay(300);
  leftSquareLeft.setToColor(color);
  rightSquareRight.setToColor(color);
  FastLED.show();
  delay(200);
  leftSquareBottom.setToColor(color);
  rightSquareBottom.setToColor(color);
  FastLED.show();
  delay(300);
  middleLeftMiddle.setToColor(color);
  middleRightMiddle.setToColor(color);
  FastLED.show();

}

void traceOutMiddleTop() {
  LightSegment middleTopLeft = get_middle_top_left(leds);
  LightSegment middleTopRight = get_middle_top_right(leds);
  SegmentList middleTops = SegmentList(&middleTopLeft);
  middleTops.add(&middleTopRight);
  boolean reverseTable[2] = {false, true};
  // TODO: Fix timing for the 15, and update color
  middleTops.traceAllDontRemain(5, 15, reverseTable, CRGB::Purple);
}

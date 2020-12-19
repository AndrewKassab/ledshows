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
  delay(11950);

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
  delay(1000);

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

  delay(4600);

  leds[left_top_right_corner] = CRGB(r,g,b);
  leds[left_bottom_left_corner] = CRGB(r,g,b);
  leds[right_top_left_corner] = CRGB(r,g,b);
  leds[right_bottom_right_corner] = CRGB(r,g,b);
  leds[left_top_left_corner] = CRGB(r,g,b);
  leds[left_bottom_right_corner] = CRGB(r,g,b);
  leds[right_top_right_corner] = CRGB(r,g,b);
  leds[right_bottom_left_corner] = CRGB(r,g,b);

  delay(20000);

}

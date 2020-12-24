#include <time.h>
#include <sequences.hpp>

CRGB leds_list[NUM_LEDS];

void setup() 
{
  default_setup(leds_list);
}
 
void loop() {

  LightSegment allLights = get_all_lights(leds_list);

  time_t theTime = time(NULL);
  struct tm *aTime = localtime(&theTime);
  int hour = aTime->tm_hour;

  FastLED.setBrightness(100);

  square_color_trace(leds_list, 1, 22, CRGB::Purple);
  square_color_trace(leds_list, 1, 22, CRGB::Yellow);
  square_color_trace(leds_list, 1, 22, CRGB::Green);
  square_color_trace(leds_list, 1, 22, CRGB::Blue);
  square_color_trace(leds_list, 1, 22, CRGB::Gold);
  square_color_trace(leds_list, 1, 22, CRGB::Red);
  square_color_trace(leds_list, 1, 22, CRGB::ForestGreen);

  allLights.fadeToBlack(15);

  blink_squares_lights(leds_list, CRGB::Gold, 325);
  delay(325);
  blink_squares_lights(leds_list, CRGB::Blue, 325);
  delay(325);
  blink_squares_lights(leds_list, CRGB::White, 325);
  delay(325);
  blink_squares_lights(leds_list, CRGB::Gold, 325);
  delay(325);
  blink_squares_lights(leds_list, CRGB::DeepPink, 325);
  delay(325);
  blink_squares_lights(leds_list, CRGB::Cyan, 325);

  allLights.fadeToBlack(20);

  LightSegment leftSquare = get_left_square(leds_list);
  LightSegment rightSquare = get_right_square(leds_list);
  SegmentList squares = SegmentList(&leftSquare);
  squares.add(&rightSquare);
  squares.fadeAllIn(10, CRGB::Red);
  squares.rainbowFade(2600);

  squares.fadeAllDown(25);

  squares_left_right_dash_up_down(leds_list, 17, CRGB::Blue, CRGB::Red);
  squares_left_right_dash_up_down(leds_list, 17, CRGB::DeepPink,
  CRGB::ForestGreen);
  squares_left_right_dash_up_down(leds_list, 17, CRGB::Cyan, CRGB::Gold);
  squares_left_right_dash_up_down(leds_list, 17, CRGB::Purple, CRGB::Green);



}

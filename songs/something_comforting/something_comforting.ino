#include <sequences.hpp>

CRGB leds[NUM_LEDS];

LightSegment allLights = get_all_lights(leds);

void setup(){
  default_setup(leds);
}

void loop(){

  FastLED.clear();
  FastLED.show();

  // 820 for half speed
  // 420 normal
  delay(420);

  blink_all_lights(leds,CRGB::White, 200);
  delay(200);
  blink_all_lights(leds, CRGB::Blue, 200);
  delay(200);
  FastLED.clear();
  FastLED.show();
  blink_all_lights(leds, CRGB::Gold, 200);
  delay(200);
  blink_all_lights(leds, CRGB::Cyan, 200);
  delay(200);
  FastLED.clear();
  FastLED.show();
  blink_all_lights(leds, CRGB::DeepPink, 200);
  delay(200);
  blink_all_lights(leds, CRGB::ForestGreen, 200);
  delay(225);
  allLights.turnOff();

  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.fadeToBlack(1);

  alternate_squares_sides_and_tops(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.turnOff();
  delay(410);
    allLights.turnOff();
  delay(410);

  alternate_squares_sides_and_tops(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.turnOff();
  delay(410);
  strobe_squares();
  allLights.turnOff();
  delay(410);
  second_of_combo();
  delay(410);
  allLights.turnOff();
  strobe_squares();
  delay(410);
  allLights.turnOff();
  top_to_bottom(leds, 410, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(410);
  allLights.turnOff();
  strobe_squares();
  delay(410);
  allLights.turnOff();
  alternate_squares_sides_and_tops(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.turnOff();
  delay(410);
  strobe_squares();
  allLights.turnOff();
  delay(410);
  second_of_combo();
  delay(410);
  allLights.turnOff();
  strobe_squares();
  delay(410);
  allLights.turnOff();
  top_to_bottom(leds, 410, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(410);
  allLights.turnOff();
  strobe_squares();
  delay(410);
  allLights.turnOff();

  // beem beem, beem beem, beem beem boo boo 
  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_top_bottom_dash_left_right(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(500);

  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_top_bottom_dash_left_right(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(500);

  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_top_bottom_dash_left_right(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(100);
  squares_left_right_dash_up_down(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  delay(500);

  switch_between_sets_of_lights(leds, 600, CRGB::Cyan);
  delay(300);

  for (int i = 0; i <= 3; i++){
    delay(200);
    switch_between_sets_of_lights(leds, 600, CRGB::Gold);
    delay(200);
    switch_between_sets_of_lights(leds, 600, CRGB::ForestGreen);
    delay(200);
    switch_between_sets_of_lights(leds, 600, CRGB::DeepPink);
    delay(200);
    switch_between_sets_of_lights(leds, 600, CRGB::White);
  }

  // TODO: Fix sequence_one to be used here

}

void second_of_combo(){
  LightSegment leftSquareLeft = get_left_square_left(leds);
  LightSegment leftSquareRight = get_left_square_right(leds);
  LightSegment rightSquareLeft = get_right_square_left(leds);
  LightSegment rightSquareRight = get_right_square_right(leds);
  SegmentList squareSides = SegmentList(&leftSquareLeft);
  squareSides.add(&leftSquareRight);
  squareSides.add(&rightSquareLeft);
  squareSides.add(&rightSquareRight);
  
  LightSegment middleLeft = get_middle_left(leds);
  LightSegment middleRight = get_middle_right(leds);
  SegmentList middleSides = SegmentList(&middleLeft);
  middleSides.add(middleRight);

  squareSides.setAllToColor(CRGB::SkyBlue);
  FastLED.show();
  delay(410);
  squareSides.turnAllOff();
  middleSides.setAllToColor(CRGB::SkyBlue);
  FastLED.show();

}

void strobe_squares(){
  set_both_squares_to_color(leds, CRGB::SkyBlue);
  FastLED.show();
  delay(205);
  set_both_squares_to_color(leds, CRGB::Black);
  FastLED.show();
  delay(205);
  set_both_squares_to_color(leds, CRGB::ForestGreen);
  FastLED.show();
}

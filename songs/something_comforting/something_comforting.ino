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

  blink_all_lights_with_ending(leds,CRGB::White, 200);
  delay(200);
  blink_all_lights_with_ending(leds, CRGB::Blue, 200);
  delay(200);
  FastLED.clear();
  FastLED.show();
  blink_all_lights_with_ending(leds, CRGB::Gold, 200);
  delay(200);
  blink_all_lights_with_ending(leds, CRGB::Cyan, 200);
  delay(200);
  FastLED.clear();
  FastLED.show();
  blink_all_lights_with_ending(leds, CRGB::DeepPink, 200);
  delay(200);
  blink_all_lights_with_ending(leds, CRGB::ForestGreen, 200);
  delay(225);
  allLights.turnOff();
  delay(10);

  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.fadeToBlack(1);

  // boom boom clap claps
  for ( int i = 0; i <= 14; i++){
    alternate_squares_sides_and_tops(leds, 410, CRGB::SkyBlue, CRGB::ForestGreen);
    delay(407);
    allLights.turnOff();
  }
  alternate_squares_sides_and_tops(leds, 420, CRGB::SkyBlue, CRGB::ForestGreen);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  squares_top_bottom_dash_left_right(leds, 3, CRGB::SkyBlue, CRGB::SkyBlue);
  FastLED.clear();

  // beem beem, beem beem, beem beem boo boo 
  for ( int i = 0; i < 3; i++ ){
    squares_left_right_dash_up_down(leds, 2, CRGB::SkyBlue, CRGB::SkyBlue);
    delay(120);
    squares_top_bottom_dash_left_right(leds, 2, CRGB::SkyBlue, CRGB::SkyBlue);
    delay(100);
    trace_square_with_delays(leds, 7, 4, 145, CRGB::SkyBlue, CRGB::SkyBlue);
    delay(25);
  }
  FastLED.clear();

  delay(480);
  switch_between_sets_of_lights(leds, 800, CRGB::Cyan);
  allLights.turnOff();
  delay(140);

  for (int i = 0; i <= 2; i++){
    delay(406);
    switch_between_sets_of_lights(leds, 410, CRGB::Gold);
    delay(406);
    allLights.turnOff();
    switch_between_sets_of_lights(leds, 410, CRGB::DeepPink);
    allLights.turnOff();
  }

  delay(700);
  switch_between_sets_of_lights(leds, 790, CRGB::Cyan);
  delay(660);
  FastLED.clear();

  for (int i = 0; i < 3; i++){
    up_down_trace(leds, 5, 5, CRGB::SkyBlue, CRGB::SkyBlue);
    delay(320);
    FastLED.clear();
    left_right_trace(leds, 5, 5, CRGB::SkyBlue, CRGB::SkyBlue);
    FastLED.clear();
    delay(320);
    up_down_trace(leds, 5, 7, CRGB::SkyBlue, CRGB::SkyBlue);
    FastLED.clear();
    delay(50);
    left_right_trace(leds, 5, 7, CRGB::SkyBlue, CRGB::SkyBlue);
    FastLED.clear();
    delay(320);
  }

  delay(20);
  set_both_squares_to_color(leds, CRGB::SkyBlue);
  FastLED.show();
  delay(815);
  allLights.setToColor(CRGB::SkyBlue);
  FastLED.show();
  allLights.fadeToBlack(36);

  blink_all_lights_with_ending(leds,CRGB::White, 200);
  delay(200);
  blink_all_lights_with_ending(leds, CRGB::Blue, 200);
  delay(200);
  FastLED.clear();
  FastLED.show();
  blink_all_lights_with_ending(leds, CRGB::Gold, 200);
  delay(200);
  blink_all_lights(leds, CRGB::Cyan, 200);
  allLights.fadeToBlack(1);
  FastLED.show();

  delay(320);
  for (int i = 0; i <= 75; i++){
    FastLED.clear();
    square_side_cycle(leds, 35, CRGB::Cyan, CRGB::Red, CRGB::Green, CRGB::Fuchsia);
    delay(35);
  }

  allLights.fadeToBlack(25);

  for (int i = 0; i < 6; i++){
    trace_upwards(leds, 5, 20, CRGB::Cyan);
    trace_upwards(leds, 5, 20, CRGB::Gold);
    trace_upwards(leds, 5, 20, CRGB::Fuchsia);
  }

  delay(300);

  for (int i = 0; i <= 3; i++){
    FastLED.clear();
    sides_to_middle(leds, 300, CRGB::SkyBlue, CRGB::SkyBlue, CRGB::SkyBlue);
    FastLED.clear();
    delay(500);
    FastLED.clear();
    set_both_squares_to_color(leds, CRGB::SkyBlue);
    FastLED.show();
    delay(500);
    FastLED.clear();
    alternate_squares_sides_and_tops(leds, 300, CRGB::SkyBlue, CRGB::SkyBlue);
    delay(500);
    FastLED.clear();
    top_to_bottom(leds, 300, CRGB::SkyBlue, CRGB::SkyBlue);
    delay(500);
    FastLED.clear();
    alternate_squares_sides_and_tops(leds, 300, CRGB::SkyBlue, CRGB::SkyBlue);
    FastLED.show();
  }
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
  middleSides.add(&middleRight);

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
  delay(180);
  set_both_squares_to_color(leds, CRGB::Black);
  FastLED.show();
  delay(180);
  set_both_squares_to_color(leds, CRGB::ForestGreen);
  FastLED.show();
}

void strobe_middle(){
  LightSegment middleArch = get_middle_arch(leds);
  middleArch.setToColor(CRGB::SkyBlue);
  FastLED.show();
  delay(180);
  middleArch.turnOff();
  FastLED.show();
  delay(180);
  middleArch.setToColor(CRGB::Cyan);
  FastLED.show();
}

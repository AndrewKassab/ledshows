#include <sequences.hpp>

CRGB leds[NUM_LEDS];

LightSegment allLights = get_all_lights(leds);

void setup(){
  default_setup(leds);
}

void loop(){

  FastLED.clear();
  FastLED.show();

  // 420 normal / lyric video
  // 8090 for music video but end is cut off
  delay(420);

  blink_all_lights_with_ending(leds,CRGB::White, 200);
  delay(200);
  blink_all_lights_with_ending(leds, CRGB::Cyan, 200);
  delay(200);
  FastLED.clear();
  FastLED.show();
  blink_all_lights_with_ending(leds, CRGB::Gold, 200);
  delay(200);
  blink_all_lights_with_ending(leds, CRGB::SkyBlue, 200);
  delay(200);
  FastLED.clear();
  FastLED.show();
  blink_all_lights_with_ending(leds, CRGB::Blue, 200);
  delay(200);
  blink_all_lights_with_ending(leds, CRGB::ForestGreen, 200);
  delay(225);
  allLights.turnOff();
  delay(10);

  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::Green);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::Green, CRGB::SkyBlue);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::SkyBlue, CRGB::Green);
  allLights.fadeToBlack(1);
  corners_cycle_towards_center(leds, 410, CRGB::Green, CRGB::SkyBlue);
  allLights.fadeToBlack(1);

  // boom boom clap claps
  for ( int i = 0; i <= 6; i++){
    alternate_squares_sides_and_tops(leds, 410, CRGB::DarkGreen, CRGB::SkyBlue);
    delay(407);
    allLights.turnOff();
    top_to_bottom(leds, 410, CRGB::Blue, CRGB::Green);
    delay(407);
    allLights.turnOff();
  }
  alternate_squares_sides_and_tops(leds, 420, CRGB::Green, CRGB::SkyBlue);
  allLights.turnOff();
  delay(407);
  top_to_bottom(leds, 410, CRGB::Blue, CRGB::SkyBlue);
  allLights.turnOff();
  squares_top_bottom_dash_left_right(leds, 3, CRGB::Blue, CRGB::SkyBlue);
  squares_top_bottom_dash_left_right(leds, 3, CRGB::SkyBlue, CRGB::Blue);
  FastLED.clear();

  // beem beem, beem beem, beem beem boo boo 
  for ( int i = 0; i < 3; i++ ){
    squares_left_right_dash_up_down(leds, 2, CRGB::Red, CRGB::Cyan);
    delay(120);
    squares_top_bottom_dash_left_right(leds, 2, CRGB::Green, CRGB::Purple);
    delay(100);
    trace_square_with_delays(leds, 7, 4, 145, CRGB::SkyBlue, CRGB::SkyBlue);
    delay(25);
  }
  FastLED.clear();

  delay(480);
  switch_between_sets_of_lights(leds, 800, CRGB::Cyan);
  delay(800);
  switch_between_sets_of_lights(leds, 800, CRGB::White);
  allLights.turnOff();
  delay(140);

  for (int i = 0; i <= 2; i++){
    delay(406);
    switch_between_sets_of_lights(leds, 410, CRGB::Gold);
    delay(410);
    FastLED.clear();
    switch_between_sets_of_lights(leds, 410, CRGB::Fuchsia);
    delay(406);
    FastLED.clear();
    switch_between_sets_of_lights(leds, 410, CRGB::Blue);
    FastLED.clear();
    delay(406);
    switch_between_sets_of_lights(leds, 410, CRGB::DeepPink);
    FastLED.clear();
  }

  delay(700);
  switch_between_sets_of_lights(leds, 790, CRGB::Cyan);
  delay(790);
  switch_between_sets_of_lights(leds, 790, CRGB::Gold);
  delay(660);
  FastLED.clear();

  for (int i = 0; i < 3; i++){
    up_down_trace(leds, 5, 5, CRGB::SkyBlue, CRGB::Blue);
    delay(320);
    FastLED.clear();
    left_right_trace(leds, 5, 5, CRGB::Cyan, CRGB::Magenta);
    FastLED.clear();
    delay(320);
    up_down_trace(leds, 5, 7, CRGB::SkyBlue, CRGB::Blue);
    FastLED.clear();
    delay(50);
    left_right_trace(leds, 5, 7, CRGB::Cyan, CRGB::Magenta);
    FastLED.clear();
    delay(320);
  }

  delay(20);
  set_both_squares_to_color(leds, CRGB::Cyan);
  FastLED.show();
  delay(815);
  allLights.setToColor(CRGB::Cyan);
  FastLED.show();
  allLights.fadeToBlack(36);

  blink_all_lights_with_ending(leds,CRGB::White, 200);
  delay(200);
  blink_all_lights_with_ending(leds, CRGB::Blue, 200);
  delay(200);
  FastLED.clear();
  FastLED.show();
  blink_all_lights_with_ending(leds, CRGB::DarkGreen, 200);
  delay(200);
  blink_all_lights(leds, CRGB::Cyan, 200);
  FastLED.clear();
  squares_top_bottom_dash_left_right(leds, 1, CRGB::Red, CRGB::Blue);
  squares_top_bottom_dash_left_right(leds, 1, CRGB::Red, CRGB::Blue);

  for (int i = 0; i <= 34; i++){
    FastLED.clear();
    square_side_cycle(leds, 35, CRGB::Red, CRGB::Cyan, CRGB::Green, CRGB::Fuchsia);
    delay(35);
    square_side_cycle(leds, 35, CRGB::Blue, CRGB::Gold, CRGB::DeepPink, CRGB::White);
    delay(35);
  }

  allLights.fadeToBlack(23);

  for (int i = 0; i < 5; i++){
    trace_upwards(leds, 5, 26, CRGB::Pink);
    trace_upwards(leds, 5, 26, CRGB::Blue);
    trace_upwards(leds, 5, 26, CRGB::Fuchsia);
  }

  delay(300);

  LightSegment middleArch = get_middle_arch(leds);

  for (int i = 0; i <= 2; i++){
    FastLED.clear();
    sides_to_middle(leds, 230, CRGB::SkyBlue, CRGB::Blue, CRGB::ForestGreen);
    FastLED.clear();
    delay(395);
    FastLED.clear();
    set_both_squares_to_color(leds, CRGB::Cyan);
    FastLED.show();
    delay(400);
    FastLED.clear();
    alternate_squares_sides_and_tops(leds, 250, CRGB::Green, CRGB::SkyBlue);
    delay(400);
    FastLED.clear();
    top_to_bottom(leds, 160, CRGB::SkyBlue, CRGB::Green);
    delay(400);
    FastLED.clear();
    middleArch.setToColor(CRGB::Cyan);
    FastLED.show();
    allLights.fadeToBlack(7);
  }
  FastLED.clear();
  sides_to_middle(leds, 240, CRGB::SkyBlue, CRGB::Blue, CRGB::ForestGreen);
  FastLED.clear();
  delay(390);
  FastLED.clear();
  set_both_squares_to_color(leds, CRGB::Cyan);
  FastLED.show();
  delay(400);
  FastLED.clear();
  alternate_squares_sides_and_tops(leds, 250, CRGB::Green, CRGB::SkyBlue);

  allLights.fadeToBlack(29);

  for ( int i = 0; i < 3; i++ ){
    squares_left_right_dash_up_down(leds, 2, CRGB::Red, CRGB::Cyan);
    delay(120);
    squares_top_bottom_dash_left_right(leds, 2, CRGB::Green, CRGB::Purple);
    delay(100);
    trace_square_with_delays(leds, 7, 4, 145, CRGB::SkyBlue, CRGB::SkyBlue);
    delay(25);
  }
  FastLED.clear();

  delay(510);
  switch_between_sets_of_lights(leds, 800, CRGB::Cyan);

  allLights.fadeToBlack(28);

  allLights.turnOff();
  delay(75);

  for (int i = 0; i <= 2; i++){
    delay(406);
    switch_between_sets_of_lights(leds, 410, CRGB::Gold);
    delay(410);
    FastLED.clear();
    switch_between_sets_of_lights(leds, 410, CRGB::Fuchsia);
    delay(406);
    FastLED.clear();
    switch_between_sets_of_lights(leds, 410, CRGB::Blue);
    FastLED.clear();
    delay(406);
    switch_between_sets_of_lights(leds, 410, CRGB::DeepPink);
    FastLED.clear();
  }

  delay(560);
  switch_between_sets_of_lights(leds, 800, CRGB::Cyan);
  allLights.fadeToBlack(5);

  blink_all_lights(leds, CRGB::Blue, 70);

  allLights.fadeToBlack(2);

  delay(150);

  leds[left_top_right_corner] = CRGB::White;
  leds[right_top_left_corner] = CRGB::White;
  FastLED.show();
  delay(800);
  leds[left_top_left_corner] = CRGB::White;
  leds[right_top_right_corner] = CRGB::White;
  FastLED.show();
  delay(800);
  leds[left_bottom_left_corner] = CRGB::White;
  leds[right_bottom_right_corner] = CRGB::White;
  FastLED.show();
  delay(800);
  leds[left_bottom_right_corner] = CRGB::White;
  leds[right_bottom_left_corner] = CRGB::White;
  FastLED.show();
  delay(1230);
  leds[middle_bottom_left_corner] = CRGB::White;
  leds[middle_bottom_right_corner] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[middle_bottom_left_corner+10] = CRGB::White;
  leds[middle_bottom_right_corner-10] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[middle_top_left_corner] = CRGB::White;
  leds[middle_top_right_corner] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[middle_top_left_corner + 10] = CRGB::White;
  leds[middle_top_right_corner - 10] = CRGB::White;
  FastLED.show();
  delay(800);
  leds[middle_top_middle] = CRGB::White;
  FastLED.show();
  allLights.fadeToBlack(12);
  leds[middle_bottom_left_corner] = CRGB::Cyan;
  leds[middle_top_left_corner] = CRGB::Cyan;
  leds[middle_top_right_corner] = CRGB::Cyan;
  leds[middle_bottom_right_corner] = CRGB::Cyan;
  FastLED.show();
  delay(800);
  leds[left_top_right_corner] = CRGB::Cyan;
  leds[left_bottom_right_corner] = CRGB::Cyan;
  leds[right_top_left_corner] = CRGB::Cyan;
  leds[right_bottom_left_corner] = CRGB::Cyan;
  FastLED.show();
  delay(800);
  leds[left_top_left_corner] = CRGB::Cyan;
  leds[left_bottom_left_corner] = CRGB::Cyan;
  leds[right_top_right_corner] = CRGB::Cyan;
  leds[right_bottom_right_corner] = CRGB::Cyan;
  FastLED.show();
  delay(150);

  allLights.fadeToBlack(80);

  for(int i = 0; i <= 4; i++){
    trace_upwards(leds, 5, 26, CRGB::Cyan);
    trace_upwards(leds, 5, 26, CRGB::Gold);
    trace_upwards(leds, 5, 26, CRGB::Fuchsia);
  }

  for(int i = 0; i <= 4; i++){
    trace_downwards(leds, 5, 26, CRGB::Cyan);
    trace_downwards(leds, 5, 26, CRGB::Gold);
    trace_downwards(leds, 5, 26, CRGB::Fuchsia);
  }

  blink_all_lights(leds, CRGB::Purple, 200);
  delay(200);
  blink_all_lights(leds, CRGB::White, 200);
  delay(200);
  blink_all_lights(leds, CRGB::Purple, 200);
  delay(200);
  blink_all_lights(leds, CRGB::White, 200);
  delay(200);
  blink_all_lights(leds, CRGB::Purple, 200);

  allLights.fadeToBlack(43);

  delay(400);

  leds[left_top_right_corner] = CRGB::Violet;
  leds[right_top_left_corner] = CRGB::Violet;
  FastLED.show();
  delay(300);
  leds[left_top_left_corner] = CRGB::Violet;
  leds[right_top_right_corner] = CRGB::Violet;
  FastLED.show();
  delay(640);
  leds[left_bottom_left_corner] = CRGB::Violet;
  leds[right_bottom_right_corner] = CRGB::Violet;
  FastLED.show();
  delay(300);
  leds[left_bottom_right_corner] = CRGB::Violet;
  leds[right_bottom_left_corner] = CRGB::Violet;
  FastLED.show();
  delay(640);
  leds[middle_bottom_left_corner] = CRGB::Violet;
  leds[middle_bottom_right_corner] = CRGB::Violet;
  FastLED.show();
  delay(300);
  leds[middle_top_left_corner] = CRGB::Violet;
  leds[middle_top_right_corner] = CRGB::Violet;
  FastLED.show();
  delay(640);
  leds[middle_top_middle] = CRGB::Violet;
  FastLED.show();
  delay(300);

  allLights.fadeToBlack(130);


  delay(10000);


}

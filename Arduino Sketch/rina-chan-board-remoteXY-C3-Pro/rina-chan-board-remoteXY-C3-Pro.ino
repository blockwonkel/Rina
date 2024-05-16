// FastLED_NeoMatrix + LEDMatrix example
//
// https://github.com/marcmerlin/FastLED_NeoMatrix
// https://github.com/Jorgen-VikingGod/LEDMatrix
//
// By Marc MERLIN <marc_soft@merlins.org>
// License: BSD-2
//fgsfds

#include <Preferences.h>
Preferences  preferences;
int presetUp;
int presetLeft;
int presetRight;

/*
   -- Rina-chan Board Pro --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.8 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.11.1 or later version;
     - for iOS 1.9.1 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__ESP32CORE_BLE
#include <BLEDevice.h>

#include <RemoteXY.h>

// RemoteXY connection settings 
#define REMOTEXY_BLUETOOTH_NAME "Rina-chan Board"


// RemoteXY configurate  
#pragma pack(push, 1)
uint8_t RemoteXY_CONF[] =   // 1621 bytes
  { 255,40,0,72,0,78,6,16,28,5,130,2,1,12,30,75,0,249,130,2,
  32,12,30,75,0,249,3,10,33,13,8,73,4,177,26,3,10,2,13,8,
  73,4,177,26,3,10,33,13,8,73,5,177,26,3,10,2,13,8,73,5,
  177,26,3,10,33,13,8,73,3,177,26,3,10,2,13,8,73,3,177,26,
  130,1,42,13,19,64,0,26,130,1,11,13,19,64,0,26,3,10,2,13,
  8,73,1,177,26,130,1,1,1,61,10,0,249,130,1,1,88,61,11,0,
  249,67,4,2,4,24,5,0,31,26,21,7,36,36,4,25,5,0,31,26,
  177,21,131,1,2,89,11,4,1,177,31,72,111,109,101,0,131,0,14,89,
  11,4,2,177,31,49,48,45,50,55,0,131,0,26,89,11,4,3,177,31,
  50,56,45,52,53,0,131,0,38,89,11,4,4,177,31,52,54,45,54,51,
  0,131,0,50,89,11,4,5,177,31,54,52,45,69,88,0,129,0,2,2,
  19,2,0,31,67,117,114,114,101,110,116,32,70,97,99,101,0,129,0,36,
  2,12,2,0,31,67,117,115,116,111,109,32,84,101,120,116,32,68,105,115,
  112,108,97,121,0,129,0,12,16,10,3,2,31,65,110,103,114,121,32,80,
  111,117,116,0,129,0,12,23,9,3,2,31,87,105,110,107,32,40,76,101,
  102,116,41,0,129,0,12,30,5,3,2,31,87,105,110,107,32,40,82,105,
  103,104,116,41,0,129,0,12,37,8,3,2,31,72,117,104,63,0,129,0,
  12,44,15,3,2,31,82,101,108,97,120,101,100,0,129,0,12,51,12,3,
  2,31,83,117,114,112,114,105,115,101,100,0,129,0,12,59,6,3,2,31,
  68,101,97,100,0,129,0,12,66,8,3,2,31,80,97,110,105,99,0,129,
  0,12,73,7,3,2,31,85,119,85,0,129,0,12,16,10,3,1,31,78,
  101,117,116,114,97,108,0,129,0,12,23,9,3,1,31,72,97,112,112,121,
  0,129,0,12,30,5,3,1,31,67,97,116,0,129,0,12,37,8,3,1,
  31,83,109,105,108,101,0,129,0,12,44,15,3,1,31,72,97,112,112,121,
  32,67,97,116,0,129,0,12,51,12,3,1,31,69,118,105,108,32,71,114,
  105,110,0,129,0,12,59,6,3,1,31,83,97,100,0,129,0,12,66,8,
  3,1,31,79,117,99,104,0,129,0,12,73,7,3,1,31,80,111,117,116,
  0,3,10,2,13,8,73,2,177,26,130,1,2,78,28,8,0,26,129,0,
  43,66,8,3,2,31,50,54,0,129,0,43,73,7,3,2,31,50,55,0,
  129,0,43,59,6,3,2,31,50,53,0,3,10,33,13,8,73,2,177,26,
  129,0,43,51,12,3,2,31,50,52,0,129,0,43,44,15,3,2,31,50,
  51,0,129,0,43,37,8,3,2,31,83,97,110,115,0,129,0,43,30,5,
  3,2,31,65,109,111,110,103,32,85,115,0,129,0,43,23,9,3,2,31,
  83,112,105,100,101,114,45,77,97,110,0,129,0,43,16,10,3,2,31,79,
  119,79,0,130,1,33,78,28,8,0,26,129,0,36,80,23,4,2,31,70,
  97,99,101,115,32,49,57,45,50,55,0,130,1,33,13,28,73,1,26,129,
  0,43,15,8,3,1,31,67,111,108,111,114,0,6,0,37,20,20,20,1,
  177,26,129,0,38,43,18,3,1,31,66,97,99,107,103,114,111,117,110,100,
  0,6,0,37,49,20,20,1,177,26,129,0,39,73,16,3,1,31,66,114,
  105,103,104,116,110,101,115,115,0,4,160,32,79,30,5,1,177,249,129,0,
  7,80,18,4,1,31,70,97,99,101,115,32,49,45,57,0,129,0,12,16,
  16,3,3,31,50,56,0,129,0,12,23,15,3,3,31,50,57,0,129,0,
  12,30,18,3,3,31,51,48,0,129,0,12,37,8,3,3,31,51,49,0,
  129,0,12,44,12,3,3,31,51,50,0,129,0,12,51,14,3,3,31,51,
  51,0,129,0,12,59,7,3,3,31,51,52,0,129,0,12,66,8,3,3,
  31,51,53,0,129,0,12,73,7,3,3,31,51,54,0,129,0,43,16,7,
  3,3,31,51,55,0,129,0,43,23,16,3,3,31,51,56,0,129,0,43,
  30,15,3,3,31,51,57,0,129,0,43,37,7,3,3,31,52,48,0,129,
  0,43,44,3,3,3,31,52,49,0,129,0,43,51,3,3,3,31,52,50,
  0,129,0,43,59,3,3,3,31,52,51,0,129,0,43,66,3,3,3,31,
  52,52,0,129,0,43,73,3,3,3,31,52,53,0,129,0,12,16,16,3,
  4,31,52,54,0,129,0,12,23,15,3,4,31,52,55,0,129,0,12,30,
  18,3,4,31,52,56,0,129,0,12,37,8,3,4,31,52,57,0,129,0,
  12,44,12,3,4,31,53,48,0,129,0,12,51,14,3,4,31,53,49,0,
  129,0,12,59,7,3,4,31,53,50,0,129,0,12,66,8,3,4,31,53,
  51,0,129,0,12,73,7,3,4,31,53,52,0,129,0,43,16,7,3,4,
  31,53,53,0,129,0,43,23,16,3,4,31,53,54,0,129,0,43,30,15,
  3,4,31,53,55,0,129,0,43,37,7,3,4,31,53,56,0,129,0,43,
  44,3,3,4,31,53,57,0,129,0,43,51,3,3,4,31,54,48,0,129,
  0,43,59,3,3,4,31,54,49,0,129,0,43,66,3,3,4,31,54,50,
  0,129,0,43,73,3,3,4,31,54,51,0,129,0,12,16,16,3,5,31,
  54,52,0,129,0,12,23,15,3,5,31,54,53,0,129,0,12,30,18,3,
  5,31,54,54,0,129,0,12,37,8,3,5,31,54,55,0,129,0,12,44,
  12,3,5,31,54,56,0,129,0,12,51,14,3,5,31,54,57,0,129,0,
  12,59,7,3,5,31,55,48,0,129,0,12,66,8,3,5,31,55,49,0,
  129,0,12,73,7,3,5,31,55,50,0,129,0,43,16,7,3,5,31,83,
  111,108,105,100,32,67,111,108,111,114,0,129,0,43,23,16,3,5,31,82,
  97,105,110,98,111,119,0,129,0,43,30,15,3,5,31,84,114,97,110,115,
  0,129,0,43,37,7,3,5,31,55,54,0,129,0,43,44,3,3,5,31,
  55,55,0,129,0,43,51,3,3,5,31,55,56,0,129,0,43,59,3,3,
  5,31,55,57,0,129,0,43,66,3,3,5,31,56,48,0,129,0,43,73,
  3,3,5,31,56,49,0,129,0,5,80,23,4,2,31,70,97,99,101,115,
  32,49,48,45,49,56,0,129,0,5,80,23,4,3,31,70,97,99,101,115,
  32,50,56,45,51,54,0,129,0,36,80,23,4,3,31,70,97,99,101,115,
  32,51,55,45,52,53,0,129,0,5,80,23,4,4,31,70,97,99,101,115,
  32,52,54,45,53,52,0,129,0,36,80,23,4,4,31,70,97,99,101,115,
  32,53,53,45,54,51,0,129,0,5,80,23,4,5,31,70,97,99,101,115,
  32,54,52,45,55,50,0,129,0,36,80,23,4,5,31,66,71,32,80,97,
  116,116,101,114,110,115,0,10,112,31,4,5,5,0,177,26,31,82,65,78,
  68,79,77,0,31,10,112,26,4,5,5,0,177,26,31,66,76,73,78,75,
  0,31,3,132,4,94,16,4,0,179,26,67,4,22,94,39,4,0,2,26,
  51 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t exp_7; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t exp_6; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t EX; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t exp_8; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t exp_5; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t exp_4; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t exp_1; // =0 if select position A, =1 if position B, =2 if position C, ... 
  char text[21];  // string UTF8 end zero  
  uint8_t exp_2; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t exp_3; // =0 if select position A, =1 if position B, =2 if position C, ... 
  uint8_t rgb_1_r; // =0..255 Red color value 
  uint8_t rgb_1_g; // =0..255 Green color value 
  uint8_t rgb_1_b; // =0..255 Blue color value 
  uint8_t rgb_2_r; // =0..255 Red color value 
  uint8_t rgb_2_g; // =0..255 Green color value 
  uint8_t rgb_2_b; // =0..255 Blue color value 
  int8_t brightness; // =-100..100 slider position 
  uint8_t randomButton; // =1 if state is ON, else =0 
  uint8_t blinker; // =1 if state is ON, else =0 
  uint8_t PresetMode; // =0 if select position A, =1 if position B, =2 if position C, ... 

    // output variables
  char textOut[21];  // string UTF8 end zero 
  char PresetIndicator[51];  // string UTF8 end zero 

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0 

} RemoteXY;
#pragma pack(pop)

/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

bool remoteBlinking = 1;
uint8_t old_blinker;
int8_t old_exp_1;
int8_t old_exp_2;
int8_t old_exp_3;
int8_t old_exp_4;
int8_t old_exp_5;
int8_t old_exp_6;
int8_t old_exp_7;
int8_t old_exp_8;
int8_t old_EX;
uint8_t old_rgb_1_r;
uint8_t old_rgb_1_g;
uint8_t old_rgb_1_b;
int8_t old_brightness;
char oldtext[121];

uint8_t old_rgb_2_r;
uint8_t old_rgb_2_g;
uint8_t old_rgb_2_b;
uint8_t old_PresetMode;


#include "config.h"
#include "remoteconfig.h"
#include "ledcolors.h"
#include <OneButton.h>

  OneButton upbtn = OneButton(REMOTEUP, true, true);
  OneButton leftbtn = OneButton(REMOTELEFT, true, true);
  OneButton rightbtn = OneButton(REMOTERIGHT, true, true);


int ROTATION=                  0;  // Rotation in 90 degree increments, (0 = 0, 1 = 90, 2 = 180, 3 = 270)
int BRIGHTNESS =              64;
int MATRIX_RGB_ORDER =         2;  // see table below and/or adjust until colors are what you'd expect.





#define PIN 6 //LED PIN
#define TEXTMODE       0
#define EXPRESSIONMODE 1

bool displaymode = EXPRESSIONMODE;
bool blinking = true;


#define MAXPERIOD 5000 //max time to display expressions in random mode (ms)
unsigned long blink_timer = 0;
unsigned long random_timer = 0;
unsigned long repeat_timer = 0;
unsigned long refresh_timer = 0;
int refresh_period = 300;
int blink_period = 3000;
int random_period = 1000;
#define REMOTE //use remote

int currentexpression = 1;
int currentcolor = 0;
int currentbg = 0;


bool randommode = true;
bool repeatmode = false;
bool randomcolormode = false;
bool randomBGmode = false;

String repeatText;




// cLEDMatrix defines 
cLEDMatrix<-MATRIX_TILE_WIDTH, -MATRIX_TILE_HEIGHT, HORIZONTAL_ZIGZAG_MATRIX,
    MATRIX_TILE_H, MATRIX_TILE_V, HORIZONTAL_BLOCKS> ledmatrix;


// Normally we would define this:
//CRGB leds[NUMMATRIX];

// cLEDMatrix creates a FastLED array inside its object and we need to retrieve
// a pointer to its first element to act as a regular FastLED array, necessary
// for NeoMatrix and other operations that may work directly on the array like FadeAll.
CRGB *leds = ledmatrix[0];

FastLED_NeoMatrix *matrix = new FastLED_NeoMatrix(leds, MATRIX_TILE_WIDTH, MATRIX_TILE_HEIGHT,
MATRIX_TILE_H, MATRIX_TILE_V,
  NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
    NEO_MATRIX_ROWS + NEO_MATRIX_ZIGZAG +
    NEO_TILE_TOP + NEO_TILE_LEFT +  NEO_TILE_PROGRESSIVE);



/*
void matrix_clear() {
    // FastLED.clear does not work properly with multiple matrices connected via parallel inputs
    // on ESP8266 (not sure about other chips).
    memset(leds, 0, NUMMATRIX*3);
    //FastLED.clear();  FastLED.show();
}
*/



int randomPeriod(){
  return random(3000, MAXPERIOD+1);
}

int blinkPeriod(){
  //on average, people blink 15-20 times a minute
  //or once every 3-4 seconds
  return random(3000, 4000);
}



void loop() {
  


    if (randommode){ randomMode(); }
    else if (repeatmode){ repeatMode();}
    else if (displaymode == EXPRESSIONMODE && blinking == true && remoteBlinking == true) { periodicBlink();}
    //delay(300);



   
    RemoteXY_Handler ();
    processRemote();
    processPhysicalRemote();
    

 

}

void periodicBlink(){
    if (millis() >= blink_timer + blink_period){
      //blink_timer = millis();
      blink_timer += blink_period;
      blink_period = blinkPeriod();
      //expression_select(currentexpression);
      neutralblink();
      expression_select(currentexpression);
    }
}

void random_expression(){
  currentexpression = random(1, RANDOMEXPRESSIONCOUNT+1);
  if (blinking == true && remoteBlinking == true) {
    neutralblink();
    blink_timer += blink_period;
    }
  expression_select(currentexpression);
  expression_select(currentexpression);
  
  randommode = true;
}



void randomMode(){
  if (millis() >= random_timer + random_period){
    random_timer = millis();
    random_period = randomPeriod();
    random_expression();
  }
}

void repeatMode(){
  if (millis() >= repeat_timer + 1000){
    repeat_timer = millis();
    renderStringScroll(repeatText);
  }
}


void setup() {
   preferences.begin("shortcuts", false);
   presetUp = preferences.getInt("presetUp", 2);
   presetLeft = preferences.getInt("presetLeft", 22);
   presetRight = preferences.getInt("presetRight", 21);
   RemoteXY_Init (); 

  //Serial.begin(115200);


   

    
    //Adjusts for the correct RGB subpixel order according to config file
    switch (MATRIX_RGB_ORDER){
      case 0: FastLED.addLeds<WS2812,PIN, RGB>(leds, NUMMATRIX); break;
      case 1: FastLED.addLeds<WS2812,PIN, RBG>(leds, NUMMATRIX); break;
      case 2: FastLED.addLeds<WS2812,PIN, GRB>(leds, NUMMATRIX); break;
      case 3: FastLED.addLeds<WS2812,PIN, GBR>(leds, NUMMATRIX); break;
      case 4: FastLED.addLeds<WS2812,PIN, BRG>(leds, NUMMATRIX); break;
      case 5: FastLED.addLeds<WS2812,PIN, BGR>(leds, NUMMATRIX); break;
      default:FastLED.addLeds<WS2812,PIN, RGB>(leds, NUMMATRIX); break;
    }
      

    //delay(1000);

    matrix->begin();
    matrix->setTextWrap(true);
    matrix->setBrightness(BRIGHTNESS);
    // Mix in an init of LEDMatrix
    //sprite_setup();
    /*
    switch (errorCode){
      case 0: renderString("RINA BOARD"); break;
      case 1: setColor(LED_RED_HIGH); renderString("SD   FAIL!");     delay(5000);   setColor(LED_PINK_HIGH);       break;
      case 2: setColor(LED_RED_HIGH); renderString("CFG  FAIL!");     delay(5000);   setColor(LED_PINK_HIGH);        break;
    }
    */
    
    #ifdef REMOTE
    setupRemote();
    setupPhysicalRemote();

    #endif


    
    //delay(2000);

}

 



void renderString(String chatcommand){
  String copy = chatcommand;

  //Remove leading spaces so that "! happy" will show "happy" instead of " happy"
  
  //This way, the audience can start sentences with "happy" without the command interpreted as a facial expression
  if (copy.startsWith(" ")){
//  while (copy.startsWith(" ")){
    copy.remove(0,1);
  }
  
  if (chatcommand.length()<=12){
    renderStringStatic(copy);
  }
  else {
    repeatText = copy;
    repeatmode = true;
    //delay(100);
  }
}

void renderStringStatic(String chatcommand){
  FastLED.clear();  FastLED.show();
  drawBG();
  //matrix->setRotation((ROTATION+1)%4);
  matrix->setRotation(1);
  matrix->setTextSize(1);
  //matrix->setTextColor(LEDCUSTOMCOLOR);
  matrix->setCursor(1,0);
  matrix->print(chatcommand);
  //delay(10);
  FastLED.show(); //matrix->show();
  matrix->setRotation(ROTATION);
  return;
}

void renderStringScroll(String chatcommand){
  FastLED.clear();  FastLED.show();
//  matrix->setRotation((ROTATION+1)%4);
  matrix->setTextSize(1);
  //matrix->setTextColor(LEDCUSTOMCOLOR);
  matrix->setBrightness(BRIGHTNESS);
  String copy = chatcommand;
  const int width = 10; //width of marquee display (in characters)

  
  const int maxlength = 60; //max length of scrolling message (in characters)
  if (copy.length()>=maxlength){
    copy.remove(maxlength);
  }
  

  
  while (copy.length()>=width){
    renderStringStatic(copy);
    //renderStringStatic(copy);
    copy.remove(0,width);
    delay(1000);
  }
  renderStringStatic(copy);
  renderStringStatic(copy);
  delay(1000);
//  matrix->setRotation(ROTATION);
  return;
}

// vim:sts=4:sw=4

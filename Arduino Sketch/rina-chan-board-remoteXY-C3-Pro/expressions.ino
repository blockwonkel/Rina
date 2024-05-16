void neutralblink(){
  neutralmidblink();
  delay(50);
  neutraleyesclosed();
  delay(150);
  neutralmidblink();
  delay(50);
}

void neutralmidblink(){
    FastLED.clear(); 
    drawBG();
    matrix->fillRect( 11,  8,  2,  2, LEDCUSTOMCOLOR);
    matrix->drawFastVLine( 12, 6, 4, LEDCUSTOMCOLOR);
    
    matrix->fillRect( 11, 22,  2,  2, LEDCUSTOMCOLOR);
    matrix->drawFastVLine( 12, 22, 4, LEDCUSTOMCOLOR);
    
    matrix->drawLine(6, 12, 4, 14, LEDCUSTOMCOLOR);
    matrix->drawLine(4, 14, 4, 17, LEDCUSTOMCOLOR);
    matrix->drawLine(6, 19, 4, 17, LEDCUSTOMCOLOR);
    FastLED.show();; //matrix->show();
}

void neutraleyesclosed(){
    FastLED.clear(); 
    drawBG();
    matrix->drawFastVLine(13, 5, 1, LEDCUSTOMCOLOR);
    matrix->drawFastVLine( 12, 6, 4, LEDCUSTOMCOLOR);

    matrix->drawFastVLine(13, 26, 1, LEDCUSTOMCOLOR);
    matrix->drawFastVLine( 12, 22, 4, LEDCUSTOMCOLOR);
    
    matrix->drawLine(6, 12, 4, 14, LEDCUSTOMCOLOR);
    matrix->drawLine(4, 14, 4, 17, LEDCUSTOMCOLOR);
    matrix->drawLine(6, 19, 4, 17, LEDCUSTOMCOLOR);
    FastLED.show();; //matrix->show();
}

void drawBG(){
    FastLED.clear();  FastLED.show();
  switch (BGIMAGE) {
    case BGSOLID:
    matrix->fillScreen(BACKGROUNDCOLOR);
    break;
    
    case BGRAINBOW:
    bgRainbow();
    //bgRainbow();
    break;

    case BGTRANS:
    bgTrans();
    //bgTrans();
    break;
    
    
    default:
    matrix->fillScreen(BACKGROUNDCOLOR);
    break;
  }
}

void rainbow(){
  FastLED.clear();  FastLED.show();
  matrix->setRotation((ROTATION+1)%4);
  matrix->fillRect(0,0,31,3, LED_RED_HIGH);
  matrix->fillRect(0,3,31,3, LED_ORANGE_HIGH);
  matrix->fillRect(0,6,31,3, LED_YELLOW_HIGH);
  matrix->fillRect(0,9,31,3, LED_GREEN_HIGH);
  matrix->fillRect(0,12,31,3, LED_BLUE_HIGH);
  matrix->fillRect(0,15,31,3, LED_PURPLE_HIGH);
  FastLED.show();; //matrix->show();
  matrix->setRotation(ROTATION);
}

void trans(){
  FastLED.clear();  FastLED.show();
  matrix->setRotation((ROTATION+1)%4);
  matrix->fillRect(0,1,31,3, LED_CYAN_HIGH);
  matrix->fillRect(0,4,31,3, LED_PINK_HIGH);
  matrix->fillRect(0,7,31,4, LED_WHITE_HIGH);
  matrix->fillRect(0,11,31,3, LED_PINK_HIGH);
  matrix->fillRect(0,14,31,3, LED_CYAN_HIGH);
  FastLED.show();; //matrix->show();
  matrix->setRotation(ROTATION);
}

void bgRainbow(){
  FastLED.clear();  FastLED.show();
  matrix->setRotation((ROTATION+1)%4);
  matrix->fillRect(0,0,31,3, LED_RED_MEDIUM);
  matrix->fillRect(0,3,31,5, LED_ORANGE_MEDIUM);
  matrix->fillRect(0,6,31,8, LED_YELLOW_MEDIUM);
  matrix->fillRect(0,9,31,11, LED_GREEN_MEDIUM);
  matrix->fillRect(0,12,31,14, LED_BLUE_MEDIUM);
  matrix->fillRect(0,15,31,17, LED_PURPLE_MEDIUM);
  FastLED.show();; //matrix->show();
  matrix->setRotation(ROTATION);
}

void bgTrans(){
  FastLED.clear();  FastLED.show();
  matrix->setRotation((ROTATION+1)%4);
  matrix->fillRect(0,0,31,3, LED_CYAN_MEDIUM);
  matrix->fillRect(0,3,31,3, LED_PINK_MEDIUM);
  matrix->fillRect(0,6,31,4, LED_WHITE_MEDIUM);
  matrix->fillRect(0,10,31,3, LED_PINK_MEDIUM);
  matrix->fillRect(0,13,31,3, LED_CYAN_MEDIUM);
  FastLED.show();; //matrix->show();
  matrix->setRotation(ROTATION);
}

void neutral_smile(){
    blinking = true;
    FastLED.clear();  FastLED.show();
    drawBG();
    matrix->fillRect( 11,  8,  4,  2, LEDCUSTOMCOLOR);
    matrix->fillRect( 11, 22,  4,  2, LEDCUSTOMCOLOR);
    matrix->drawLine(6, 12, 4, 14, LEDCUSTOMCOLOR);
    matrix->drawLine(4, 14, 4, 17, LEDCUSTOMCOLOR);
    matrix->drawLine(6, 19, 4, 17, LEDCUSTOMCOLOR);
    FastLED.show();; //matrix->show();
}

void happy(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(14, 7, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(10, 7, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 7, 8, 7, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 9, 8, 9, LEDCUSTOMCOLOR);

  matrix->drawLine(12, 20, 12, 20, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 21, 14, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 21, 10, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 24, 8, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 22, 8, 22, LEDCUSTOMCOLOR);

  matrix->drawLine(7, 12, 7, 19, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 12, 3, 15, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 19, 3, 16, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void catface(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->fillRect( 11,  8,  4,  2, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 7, 8, 7, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 9, 8, 9, LEDCUSTOMCOLOR);
  
  matrix->fillRect( 11, 22,  4,  2, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 24, 8, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 22, 8, 22, LEDCUSTOMCOLOR);

  matrix->drawLine(6, 11, 4, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 13, 6, 15, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 16, 4, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 18, 6, 20, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void smile(){
    blinking = true;
    FastLED.clear();  FastLED.show();
  drawBG();
    matrix->fillRect( 10,  9,  4,  2, LEDCUSTOMCOLOR);
    matrix->drawLine(14,  8, 14,  8, LEDCUSTOMCOLOR);
    matrix->drawLine( 8,  8,  8,  8, LEDCUSTOMCOLOR);
    matrix->drawLine( 8, 10,  8, 10, LEDCUSTOMCOLOR);
    
    matrix->fillRect( 10, 21,  4,  2, LEDCUSTOMCOLOR);
    matrix->drawLine(14,  20, 14,  20, LEDCUSTOMCOLOR);
    matrix->drawLine( 8,  21,  8,  21, LEDCUSTOMCOLOR);
    matrix->drawLine( 8, 23,  8, 23, LEDCUSTOMCOLOR);
    
    matrix->drawLine(6, 12, 4, 14, LEDCUSTOMCOLOR);
    matrix->drawLine(4, 14, 4, 17, LEDCUSTOMCOLOR);
    matrix->drawLine(6, 19, 4, 17, LEDCUSTOMCOLOR);
    FastLED.show();; //matrix->show();
}

void happycat(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(14, 7, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(10, 7, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 7, 8, 7, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 9, 8, 9, LEDCUSTOMCOLOR);
  
  matrix->drawLine(12, 20, 12, 20, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 21, 14, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 21, 10, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 24, 8, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 22, 8, 22, LEDCUSTOMCOLOR);

  matrix->drawLine(6, 11, 4, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 13, 6, 15, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 16, 4, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 18, 6, 20, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void evilgrin(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(11, 9, 11, 10, LEDCUSTOMCOLOR);
  matrix->drawLine(12, 8, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 8, 13,  9, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 7, 8, 7, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 9, 8, 9, LEDCUSTOMCOLOR);

  matrix->drawLine(11, 21, 11, 22, LEDCUSTOMCOLOR);
  matrix->drawLine(12, 20, 12, 23, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 22, 13, 23, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 24, 8, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 22, 8, 22, LEDCUSTOMCOLOR);  

  matrix->drawLine(7, 11, 5, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(5, 13, 5, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(7, 20, 5, 18, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();  
}

void sad(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->fillRect(10, 9, 4, 2, LEDCUSTOMCOLOR);
  matrix->fillRect(11, 8, 2, 4, LEDCUSTOMCOLOR);
  matrix->drawLine(12, 9, 12, 9, BACKGROUNDCOLOR);

  matrix->fillRect(10, 21, 4, 2, LEDCUSTOMCOLOR);
  matrix->fillRect(11, 20, 2, 4, LEDCUSTOMCOLOR);
  matrix->drawLine(12, 22, 12, 22, BACKGROUNDCOLOR);
  matrix->drawCircle(9, 23, 1, LEDCUSTOMCOLOR);

  matrix->drawLine(4, 12, 5, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(5, 14, 4, 15, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 16, 5, 17, LEDCUSTOMCOLOR);
  matrix->drawLine(5, 18, 4, 19, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void ouch(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(14, 7, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(10, 7, 12, 11, LEDCUSTOMCOLOR);
  
  matrix->drawLine(12, 20, 12, 20, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 21, 14, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 21, 10, 24, LEDCUSTOMCOLOR);

  matrix->drawLine(4, 12, 5, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(5, 14, 4, 15, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 16, 5, 17, LEDCUSTOMCOLOR);
  matrix->drawLine(5, 18, 4, 19, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void pout(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->fillRect( 11,  9,  4,  2, LEDCUSTOMCOLOR);
  matrix->fillRect( 11, 22,  4,  2, LEDCUSTOMCOLOR);

  matrix->drawLine(6, 13, 6, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 12, 5, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 12, 7, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 19, 5, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 19, 7, 18, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void angrypout(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(11, 9, 11, 10, LEDCUSTOMCOLOR);
  matrix->drawLine(12, 8, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 8, 13,  9, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 7, 8, 7, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 9, 8, 9, LEDCUSTOMCOLOR);

  matrix->drawLine(11, 21, 11, 22, LEDCUSTOMCOLOR);
  matrix->drawLine(12, 20, 12, 23, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 22, 13, 23, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 24, 8, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 22, 8, 22, LEDCUSTOMCOLOR);  

  matrix->drawLine(6, 13, 6, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 12, 5, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 12, 7, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 19, 5, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 19, 7, 18, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void winkleft(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->fillRect( 11,  9,  4,  2, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 7, 8, 7, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 9, 8, 9, LEDCUSTOMCOLOR);

  matrix->drawLine(12, 20, 12, 20, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 21, 14, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 21, 10, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 24, 8, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 22, 8, 22, LEDCUSTOMCOLOR);

  matrix->drawLine(6, 12, 5, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(5, 13, 5, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 19, 5, 18, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();  
}

void winkright(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(14, 7, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(10, 7, 12, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 7, 8, 7, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 9, 8, 9, LEDCUSTOMCOLOR);

  matrix->fillRect(11, 21,  4,  2, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 24, 8, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 22, 8, 22, LEDCUSTOMCOLOR);

  matrix->drawLine(6, 12, 5, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(5, 13, 5, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 19, 5, 18, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show(); 
}

void huh(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(13, 8, 14, 8, LEDCUSTOMCOLOR);
  matrix->drawLine(15, 9, 15, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 12, 14, 12, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 10, 13, 12, LEDCUSTOMCOLOR);
  matrix->drawLine(9, 10, 9, 10, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 10, 11, 10, LEDCUSTOMCOLOR);
//  matrix->drawLine(9, 10, 11, 10, LEDCUSTOMCOLOR);

//  matrix->drawLine(9, 21, 15, 21, LEDCUSTOMCOLOR);
  matrix->drawLine(9, 21, 9, 21, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 21, 15, 21, LEDCUSTOMCOLOR);
//  matrix->drawLine(10, 10, 10, 21, BACKGROUNDCOLOR);

  matrix->drawLine(6, 11, 4, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 13, 4, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 18, 6, 20, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void relaxed(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(13, 7, 11, 9, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 10, 13, 12, LEDCUSTOMCOLOR);

  matrix->drawLine(13, 19, 11, 21, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 22, 13, 24, LEDCUSTOMCOLOR);

  matrix->drawLine(6, 13, 4, 15, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 16, 6, 18, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void uwu(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(13, 7, 11, 9, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 10, 13, 12, LEDCUSTOMCOLOR);

  matrix->drawLine(13, 19, 11, 21, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 22, 13, 24, LEDCUSTOMCOLOR);

  matrix->drawLine(6, 11, 4, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 13, 6, 15, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 16, 4, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 18, 6, 20, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void owo(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawCircle( 11,  7,  3, LEDCUSTOMCOLOR);
  matrix->drawCircle( 11, 24,  3, LEDCUSTOMCOLOR);


  matrix->drawLine(6, 11, 4, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 13, 6, 15, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 16, 4, 18, LEDCUSTOMCOLOR);
  matrix->drawLine(4, 18, 6, 20, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void surprised(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(14, 7, 15, 8, LEDCUSTOMCOLOR);
  matrix->drawLine(15, 8, 15, 10, LEDCUSTOMCOLOR);
  matrix->drawLine(15, 10, 14, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 11, 11, 9, LEDCUSTOMCOLOR);
//  matrix->drawLine(11, 9, 8, 9, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 9, 10, 9, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 9, 8, 9, LEDCUSTOMCOLOR);

  matrix->drawLine(14, 20, 15, 21, LEDCUSTOMCOLOR);
  matrix->drawLine(15, 21, 15, 23, LEDCUSTOMCOLOR);
  matrix->drawLine(15, 23, 14, 24, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 24, 11, 22, LEDCUSTOMCOLOR);
//  matrix->drawLine(11, 22, 8, 22, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 22, 10, 22, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 22, 8, 22, LEDCUSTOMCOLOR);
//  matrix->drawLine(9, 9, 9, 22, BACKGROUNDCOLOR);


  matrix->drawRoundRect(3, 13, 5, 6, 1, LEDCUSTOMCOLOR);
//  matrix->drawRect(3, 14, 5, 4, LEDCUSTOMCOLOR);
//  matrix->drawRect(4, 13, 3, 6, LEDCUSTOMCOLOR);
//  matrix->drawRect(4, 14, 3, 4, BACKGROUNDCOLOR);
  FastLED.show();; //matrix->show();
}

void dead(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(11, 7, 15, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 11, 15, 7, LEDCUSTOMCOLOR);

  matrix->drawLine(11, 19, 15, 23, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 23, 15, 19, LEDCUSTOMCOLOR);

  matrix->drawCircle(5, 15, 3, LEDCUSTOMCOLOR);
  matrix->fillRect(6, 11, 5, 9, BACKGROUNDCOLOR);
  matrix->drawLine(6, 11, 6, 19, LEDCUSTOMCOLOR);
  matrix->drawLine(5, 15, 6, 15, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void panicface(){
  blinking = true;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->drawLine(14, 8, 12, 12, LEDCUSTOMCOLOR);
  matrix->drawLine(10, 8, 12, 12, LEDCUSTOMCOLOR);
  matrix->drawLine(7, 7, 8, 8, LEDCUSTOMCOLOR);
  matrix->drawLine(7, 9, 8, 10, LEDCUSTOMCOLOR);

  matrix->drawLine(12, 19, 12, 19, LEDCUSTOMCOLOR);
  matrix->drawLine(13, 20, 14, 23, LEDCUSTOMCOLOR);
  matrix->drawLine(11, 20, 10, 23, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 21, 7, 22, LEDCUSTOMCOLOR);
  matrix->drawLine(8, 23, 7, 24, LEDCUSTOMCOLOR);

  matrix->drawLine(3, 11, 6, 11, LEDCUSTOMCOLOR);
  matrix->drawLine(2, 12, 2, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(7, 12, 7, 13, LEDCUSTOMCOLOR);
  matrix->drawLine(3, 14, 3, 17, LEDCUSTOMCOLOR);
  matrix->drawLine(6, 14, 6, 17, LEDCUSTOMCOLOR);
  matrix->drawLine(2, 18, 2, 19, LEDCUSTOMCOLOR);
  matrix->drawLine(7, 18, 7, 19, LEDCUSTOMCOLOR);
  matrix->drawLine(3, 20, 6, 20, LEDCUSTOMCOLOR);
  FastLED.show();; //matrix->show();
}

void sans(){
  
  blinking = false;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->fillRect(0, 3, 18, 26, LED_WHITE_HIGH);
  matrix->fillRect(1, 2, 4, 28, LED_WHITE_HIGH);
  matrix->fillRect(7, 2, 11, 28, LED_WHITE_HIGH);
  matrix->fillRect(9, 1, 7, 30, LED_WHITE_HIGH);
  
  matrix->fillRect(7, 6, 7, 6, BACKGROUNDCOLOR);
  matrix->fillRect(8, 4, 5, 8, BACKGROUNDCOLOR);
  matrix->drawLine(9, 3, 11, 3, BACKGROUNDCOLOR);
  matrix->drawLine(9, 12, 12, 12, BACKGROUNDCOLOR);
  matrix->drawLine(5, 8, 5, 9, BACKGROUNDCOLOR);
  matrix->drawLine(5, 9, 6, 10, BACKGROUNDCOLOR);
  matrix->fillRect(9, 8, 2, 2, LED_WHITE_HIGH);

  matrix->fillRect(7, 20, 7, 6, BACKGROUNDCOLOR);
  matrix->fillRect(8, 20, 5, 8, BACKGROUNDCOLOR);
  matrix->drawLine(9, 28, 11, 28, BACKGROUNDCOLOR);
  matrix->drawLine(9, 19, 12, 19, BACKGROUNDCOLOR);
  matrix->drawLine(5, 23, 5, 22, BACKGROUNDCOLOR);
  matrix->drawLine(5, 22, 6, 21, BACKGROUNDCOLOR);
  matrix->fillRect(9, 22, 2, 2, LED_WHITE_HIGH);

  matrix->fillRect(4, 14, 3, 4, BACKGROUNDCOLOR);
  matrix->fillRect(4, 15, 5, 2, BACKGROUNDCOLOR);

  matrix->drawLine(2, 4, 2, 6, BACKGROUNDCOLOR);
  matrix->drawLine(1, 6, 4, 6, BACKGROUNDCOLOR);
  matrix->drawLine(0, 7, 0, 8, BACKGROUNDCOLOR);
  matrix->drawLine(0, 8, 2, 8, BACKGROUNDCOLOR);
  matrix->drawLine(2, 8, 3, 7, BACKGROUNDCOLOR);
  matrix->drawLine(2, 9, 1, 10, BACKGROUNDCOLOR);
  matrix->drawLine(1, 10, 1, 22, BACKGROUNDCOLOR);
  matrix->drawLine(0, 12, 1, 12, BACKGROUNDCOLOR);
  matrix->drawLine(0, 15, 1, 15, BACKGROUNDCOLOR);
  matrix->drawLine(0, 19, 1, 19, BACKGROUNDCOLOR);
  matrix->drawLine(0, 22, 1, 22, BACKGROUNDCOLOR);
  matrix->drawLine(2, 23, 2, 27, BACKGROUNDCOLOR);
  matrix->drawLine(0, 24, 2, 24, BACKGROUNDCOLOR);
  matrix->drawLine(1, 25, 4, 25, BACKGROUNDCOLOR);
  matrix->drawLine(2, 26, 3, 26, BACKGROUNDCOLOR);
  FastLED.show();; //matrix->show();
}

void sanseye(){
  blinking = false;
  int oldbrightness = BRIGHTNESS;
  BRIGHTNESS = 32;
  FastLED.clear();  FastLED.show();
  drawBG();
  matrix->fillRect(0, 3, 18, 26, LED_WHITE_HIGH);
  matrix->fillRect(1, 2, 4, 28, LED_WHITE_HIGH);
  matrix->fillRect(7, 2, 11, 28, LED_WHITE_HIGH);
  matrix->fillRect(9, 1, 7, 30, LED_WHITE_HIGH);
  
  matrix->fillRect(7, 6, 7, 6, BACKGROUNDCOLOR);
  matrix->fillRect(8, 4, 5, 8, BACKGROUNDCOLOR);
  matrix->drawLine(9, 3, 11, 3, BACKGROUNDCOLOR);
  matrix->drawLine(9, 12, 12, 12, BACKGROUNDCOLOR);
  matrix->drawLine(5, 8, 5, 9, BACKGROUNDCOLOR);
  matrix->drawLine(5, 9, 6, 10, BACKGROUNDCOLOR);

  matrix->fillRect(7, 20, 7, 6, BACKGROUNDCOLOR);
  matrix->fillRect(8, 20, 5, 8, BACKGROUNDCOLOR);
  matrix->drawLine(9, 28, 11, 28, BACKGROUNDCOLOR);
  matrix->drawLine(9, 19, 12, 19, BACKGROUNDCOLOR);
  matrix->drawLine(5, 23, 5, 22, BACKGROUNDCOLOR);
  matrix->drawLine(5, 22, 6, 21, BACKGROUNDCOLOR);
  matrix->fillRect(8, 22, 5, 3, LED_CYAN_HIGH);
  matrix->fillRect(9, 21, 3, 5, LED_CYAN_HIGH);
  matrix->drawLine(10, 20, 10, 26, LED_CYAN_HIGH);
  matrix->drawLine(10, 23, 10, 23, BACKGROUNDCOLOR);

  matrix->fillRect(4, 14, 3, 4, BACKGROUNDCOLOR);
  matrix->fillRect(4, 15, 5, 2, BACKGROUNDCOLOR);

  matrix->drawLine(2, 4, 2, 6, BACKGROUNDCOLOR);
  matrix->drawLine(1, 6, 4, 6, BACKGROUNDCOLOR);
  matrix->drawLine(0, 7, 0, 8, BACKGROUNDCOLOR);
  matrix->drawLine(0, 8, 2, 8, BACKGROUNDCOLOR);
  matrix->drawLine(2, 8, 3, 7, BACKGROUNDCOLOR);
  matrix->drawLine(2, 9, 1, 10, BACKGROUNDCOLOR);
  matrix->drawLine(1, 10, 1, 22, BACKGROUNDCOLOR);
  matrix->drawLine(0, 12, 1, 12, BACKGROUNDCOLOR);
  matrix->drawLine(0, 15, 1, 15, BACKGROUNDCOLOR);
  matrix->drawLine(0, 19, 1, 19, BACKGROUNDCOLOR);
  matrix->drawLine(0, 22, 1, 22, BACKGROUNDCOLOR);
  matrix->drawLine(2, 23, 2, 27, BACKGROUNDCOLOR);
  matrix->drawLine(0, 24, 2, 24, BACKGROUNDCOLOR);
  matrix->drawLine(1, 25, 4, 25, BACKGROUNDCOLOR);
  matrix->drawLine(2, 26, 3, 26, BACKGROUNDCOLOR);
  FastLED.show();; //matrix->show();

  delay(100);

for (int i = 0; i <= 10; i++){
  matrix->fillRect(8, 22, 5, 3, LED_YELLOW_HIGH);
  matrix->fillRect(9, 21, 3, 5, LED_YELLOW_HIGH);
  matrix->drawLine(10, 20, 10, 26, LED_YELLOW_HIGH);
  matrix->drawLine(10, 23, 10, 23, BACKGROUNDCOLOR);
  FastLED.show();; //matrix->show();

  delay(100);

  matrix->fillRect(8, 22, 5, 3, LED_CYAN_HIGH);
  matrix->fillRect(9, 21, 3, 5, LED_CYAN_HIGH);
  matrix->drawLine(10, 20, 10, 26, LED_CYAN_HIGH);
  matrix->drawLine(10, 23, 10, 23, BACKGROUNDCOLOR);
  FastLED.show();; //matrix->show();

  delay(100);
  }
}
//32*18 spiderman
/*
void spiderman(){
  matrix->fillScreen(LED_BLACK);
  matrix->setRotation((ROTATION+1)%4);
  matrix->drawLine(1,3,1,13, LED_RED_HIGH);
  matrix->drawLine(1,13,5,17, LED_RED_HIGH);
  matrix->drawLine(1,12,6,17, LED_RED_HIGH);
  matrix->drawLine(5,17,10,17, LED_RED_HIGH);
  matrix->fillRect(10,8,2,9, LED_RED_HIGH);
  matrix->fillRect(12,12,2,2, LED_RED_HIGH);
  matrix->drawLine(12,10,12,15, LED_RED_HIGH);
  matrix->drawLine(5,3,9,7, LED_RED_HIGH);
  matrix->drawLine(6,3,10,7, LED_RED_HIGH);
  matrix->fillRect(2,2,3,3, LED_RED_HIGH);

  matrix->fillRect(2,5,5,8, LED_WHITE_HIGH);
  matrix->fillRect(6,8,4,9, LED_WHITE_HIGH);
  matrix->fillRect(5,10,6,6, LED_WHITE_HIGH);
  matrix->fillRect(3,12,9,2, LED_WHITE_HIGH);
  matrix->fillRect(4,4,2,11, LED_WHITE_HIGH);
  matrix->drawLine(3,3,8,7, LED_WHITE_HIGH);
  matrix->drawLine(3,4,7,7, LED_WHITE_HIGH);
  
    
  matrix->drawLine(30,3,30,13, LED_RED_HIGH);
  matrix->drawLine(30,13,26,17, LED_RED_HIGH);
  matrix->drawLine(30,12,25,17, LED_RED_HIGH);
  matrix->drawLine(26,17,21,17, LED_RED_HIGH);
  matrix->fillRect(20,8,2,9, LED_RED_HIGH);
  matrix->fillRect(18,12,2,2, LED_RED_HIGH);
  matrix->drawLine(19,10,19,15, LED_RED_HIGH);
  matrix->drawLine(26,3,22,7, LED_RED_HIGH);
  matrix->drawLine(25,3,21,7, LED_RED_HIGH);
  matrix->fillRect(27,2,3,3, LED_RED_HIGH);

  matrix->fillRect(25,5,5,8, LED_WHITE_HIGH);
  matrix->fillRect(22,8,4,9, LED_WHITE_HIGH);
  matrix->fillRect(20,12,9,2, LED_WHITE_HIGH);
  matrix->fillRect(21,10,6,6, LED_WHITE_HIGH);
  matrix->fillRect(26,4,2,11, LED_WHITE_HIGH);
  matrix->drawLine(28,3,23,7, LED_WHITE_HIGH);
  matrix->drawLine(28,4,24,7, LED_WHITE_HIGH);
  
  FastLED.show();; //matrix->show();
  matrix->setRotation(ROTATION);
}
*/


//32*16 spiderman
void spiderman(){
  blinking = false;
  FastLED.clear();  FastLED.show();
  matrix->fillScreen(LED_BLACK);
  matrix->setRotation((ROTATION+1)%4);
  matrix->drawLine(1,1,1,11, LED_RED_HIGH);
  matrix->drawLine(1,11,5,15, LED_RED_HIGH);
  matrix->drawLine(1,10,6,15, LED_RED_HIGH);
  matrix->drawLine(5,15,10,15, LED_RED_HIGH);
  matrix->fillRect(10,6,2,9, LED_RED_HIGH);
  matrix->fillRect(12,10,2,2, LED_RED_HIGH);
  matrix->drawLine(12,8,12,13, LED_RED_HIGH);
  matrix->drawLine(5,1,9,5, LED_RED_HIGH);
  matrix->drawLine(6,1,10,5, LED_RED_HIGH);
  matrix->fillRect(2,0,3,3, LED_RED_HIGH);

  matrix->fillRect(2,3,5,8, LED_WHITE_HIGH);
  matrix->fillRect(6,6,4,9, LED_WHITE_HIGH);
  matrix->fillRect(5,8,6,6, LED_WHITE_HIGH);
  matrix->fillRect(3,10,9,2, LED_WHITE_HIGH);
  matrix->fillRect(4,2,2,11, LED_WHITE_HIGH);
  matrix->drawLine(3,1,8,5, LED_WHITE_HIGH);
  matrix->drawLine(3,2,7,5, LED_WHITE_HIGH);
  
    
  matrix->drawLine(30,1,30,12, LED_RED_HIGH);
  matrix->drawLine(30,11,26,15, LED_RED_HIGH);
  matrix->drawLine(30,10,25,15, LED_RED_HIGH);
  matrix->drawLine(26,15,21,15, LED_RED_HIGH);
  matrix->fillRect(20,6,2,9, LED_RED_HIGH);
  matrix->fillRect(18,10,2,2, LED_RED_HIGH);
  matrix->drawLine(19,8,19,13, LED_RED_HIGH);
  matrix->drawLine(26,1,22,5, LED_RED_HIGH);
  matrix->drawLine(25,1,21,5, LED_RED_HIGH);
  matrix->fillRect(27,0,3,3, LED_RED_HIGH);

  matrix->fillRect(25,3,5,8, LED_WHITE_HIGH);
  matrix->fillRect(22,6,4,9, LED_WHITE_HIGH);
  matrix->fillRect(20,10,9,2, LED_WHITE_HIGH);
  matrix->fillRect(21,8,6,6, LED_WHITE_HIGH);
  matrix->fillRect(26,2,2,11, LED_WHITE_HIGH);
  matrix->drawLine(28,1,23,5, LED_WHITE_HIGH);
  matrix->drawLine(28,2,24,5, LED_WHITE_HIGH);
  
  FastLED.show();; //matrix->show();
  matrix->setRotation(ROTATION);
}


void amongus(){
  blinking = false;
  FastLED.clear();  FastLED.show();
  matrix->fillScreen(BACKGROUNDCOLOR);
  matrix->setRotation((ROTATION+1)%4);

  matrix->drawRoundRect(0,0,32,16,3, LED_WHITE_HIGH); //White Outer Outline

  //Ignore this, I wasn't thinking with enough layers, lol
  /*
  matrix->fillRoundRect(2,2,28,12,2, LED_CYAN_HIGH); //Main Visor Color
  matrix->drawRoundRect(1,1,30,13,3, LED_BLUE_HIGH); //Blue Shading (bottom)
  matrix->drawLine(3,12,28,12,       LED_BLUE_HIGH);
  matrix->fillRect(28,2,2,10,       LED_BLUE_HIGH); //More Blue Shading (right)
  matrix->drawTriangle(27,11,25,11,27,9, LED_BLUE_HIGH); //More Blue Shading (rounding bottom right corner)
  matrix->drawRoundRect(1,1,30,14,2, LED_BLACK); //Black inner Outline, should cover upper part of Blue Shading
  matrix->drawLine(2,2,2,2,          LED_BLACK); //Fix stray blue dots
  matrix->drawLine(29,2,29,2,        LED_BLACK);
  */

  
  matrix->fillRoundRect(2,2,28,12,2, LED_BLUE_HIGH); //Blue Shading
  matrix->fillRoundRect(2,2,26,10,2, LED_CYAN_HIGH); //Cyan Main Color
  matrix->fillRoundRect(3,3,16,4,2,  LED_WHITE_HIGH); //White Shine
  matrix->fillCircle(5,5,2,          LED_WHITE_HIGH); //More White Shine (bottom left of shine)

  FastLED.show();; //matrix->show();
  matrix->setRotation(ROTATION);
}

String numberText(int expression_number){
  char numberText[30];
  switch (expression_number){
    case 0:   sprintf(numberText, "Random");              break;
    case 1:   sprintf(numberText, "Neutral Smile");       break;
    case 2:   sprintf(numberText, "Happy");               break;
    case 3:   sprintf(numberText, "Cat Face");            break;
    case 4:   sprintf(numberText, "Smile");               break;
    case 5:   sprintf(numberText, "Happy Cat");           break;
    case 6:   sprintf(numberText, "Evil Grin");           break;
    case 7:   sprintf(numberText, "Sad");                 break;
    case 8:   sprintf(numberText, "Ouch");                break;
    case 9:   sprintf(numberText, "Pout");                break;
    case 10:  sprintf(numberText, "Angry Pout");          break;
    case 11:  sprintf(numberText, "Wink (Left)");         break;
    case 12:  sprintf(numberText, "Wink (Right)");        break;
    case 13:  sprintf(numberText, "Huh?");                break;
    case 14:  sprintf(numberText, "Relaxed");             break;
    case 15:  sprintf(numberText, "Surprised");           break;
    case 16:  sprintf(numberText, "Dead");                break;
    case 17:  sprintf(numberText, "Panic");               break;
    case 18:  sprintf(numberText, "UwU");                 break;
    case 19:  sprintf(numberText, "OwO");                 break;       
    case 20:  sprintf(numberText, "Spider-Man");          break;
    case 21:  sprintf(numberText, "Among Us");            break;
    case 22:  sprintf(numberText, "Sans UNDRTL");      break;
  }
  return numberText;
}

void expression_select(int expression_number){
    
    //neutralblink(); //show blink animation to hide transition
    //blink_period = blinkPeriod();
    if (randomcolormode){LEDCUSTOMCOLOR = randomColor();}
    if (randomBGmode) {BACKGROUNDCOLOR = randomColor();}
    strcpy(RemoteXY.textOut, numberText(expression_number).c_str());
  switch (expression_number){
    /*
    case 0:   strcpy(RemoteXY.textOut, "!Random");          randomMode();   break;
    case 1:   strcpy(RemoteXY.textOut, "!Neutral Smile");   neutral_smile();    break;
    case 2:   strcpy(RemoteXY.textOut, "!Happy");           happy();    break;
    case 3:   strcpy(RemoteXY.textOut, "!Cat Face");        catface();    break;
    case 4:   strcpy(RemoteXY.textOut, "!Smile");           smile();    break;
    case 5:   strcpy(RemoteXY.textOut, "!Happy Cat");       happycat();   break;
    case 6:   strcpy(RemoteXY.textOut, "!Evil Grin");       evilgrin();   break;
    case 7:   strcpy(RemoteXY.textOut, "!Sad");             sad();    break;
    case 8:   strcpy(RemoteXY.textOut, "!Ouch");            ouch();   break;
    case 9:   strcpy(RemoteXY.textOut, "!Pout");            pout();   break;
    case 10:  strcpy(RemoteXY.textOut, "!Angry Pout");      angrypout();    break;
    case 11:  strcpy(RemoteXY.textOut, "!Wink (Left)");     winkleft();    break;
    case 12:  strcpy(RemoteXY.textOut, "!Wink (Right)");    winkright();   break;
    case 13:  strcpy(RemoteXY.textOut, "!Huh?");            huh();    break;
    case 14:  strcpy(RemoteXY.textOut, "!Relaxed");         relaxed();    break;
    case 15:  strcpy(RemoteXY.textOut, "!Surprised");       surprised();   break;
    case 16:  strcpy(RemoteXY.textOut, "!Dead");            dead();       break;
    case 17:  strcpy(RemoteXY.textOut, "!Panic");           panicface();    break;
    case 18:  strcpy(RemoteXY.textOut, "!UwU");             uwu();   break;
    case 19:  strcpy(RemoteXY.textOut, "!OwO");             owo();   break;
    //any expressions numbered above RANDOMEXPRESSIONCOUNT are skipped in random mode.        
    case 20:  strcpy(RemoteXY.textOut, "!Spider-Man");      spiderman();     break;
    case 21:  strcpy(RemoteXY.textOut, "!Among Us");        amongus();     break;
    case 22:  strcpy(RemoteXY.textOut, "!Sans Undertale");  sans(); sanseye();    break;
    */
    case 0:             randomMode();   break;
    case 1:      neutral_smile();    break;
    case 2:              happy();    break;
    case 3:           catface();    break;
    case 4:              smile();    break;
    case 5:          happycat();   break;
    case 6:          evilgrin();   break;
    case 7:                sad();    break;
    case 8:               ouch();   break;
    case 9:               pout();   break;
    case 10:        angrypout();    break;
    case 11:       winkleft();    break;
    case 12:      winkright();   break;
    case 13:              huh();    break;
    case 14:           relaxed();    break;
    case 15:         surprised();   break;
    case 16:              dead();       break;
    case 17:             panicface();    break;
    case 18:               uwu();   break;
    case 19:               owo();   break;
    //any expressions numbered above RANDOMEXPRESSIONCOUNT are skipped in random mode.        
    case 20:        spiderman();     break;
    case 21:          amongus();     break;
    case 22:    sans(); sanseye();    break;
    
    default:   neutral_smile();    break;

  }
  //Serial.print("Expression:");
  //Serial.println(expression_number);
}
/*
void color_select(int color_number){
  switch (color_number){
    case 0: setColor(LED_PINK_HIGH);    break;
    case 1: setColor(LED_RED_HIGH);     break;
    case 2: setColor(LED_ORANGE_HIGH);  break;
    case 3: setColor(LED_YELLOW_HIGH);  break;
    case 4: setColor(LED_GREEN_HIGH);   break;
    case 5: setColor(LED_CYAN_HIGH);    break;
    case 6: setColor(LED_BLUE_HIGH);    break;
    case 7: setColor(LED_PURPLE_HIGH);  break;
    case 8: setColor(LED_WHITE_HIGH);   break;
    case 9: setColor(LED_BLACK);        break;
    default: setColor(LED_PINK_HIGH);   break;
  }
}

void bg_select(int bg_number){
  switch (bg_number){
    case 0: setBGColor(LED_PINK_LOW);    break;
    case 1: setBGColor(LED_RED_LOW);     break;
    case 2: setBGColor(LED_ORANGE_LOW);  break;
    case 3: setBGColor(LED_YELLOW_LOW);  break;
    case 4: setBGColor(LED_GREEN_LOW);   break;
    case 5: setBGColor(LED_CYAN_LOW);    break;
    case 6: setBGColor(LED_BLUE_LOW);    break;
    case 7: setBGColor(LED_PURPLE_LOW);  break;
    case 8: setBGColor(LED_WHITE_LOW);   break;
    case 9: setBGColor(LED_BLACK);       break;
    
    case 10: BGIMAGE = BGRAINBOW; setColor(LED_WHITE_HIGH); break;
    case 11: BGIMAGE = BGTRANS;   setColor(LED_WHITE_HIGH); break;
    default: setBGColor(LED_BLACK);      break;
  }
}

void nextExpression(){
  currentexpression++;
  if (currentexpression >= EXPRESSIONCOUNT){
    if (usesans){
      currentexpression = 0;
    }
    else{
      currentexpression = 1;
    }
  }
  expression_select(currentexpression);
}

void previousExpression(){
  currentexpression--;
  if (usesans){
    if (currentexpression <= -1){
      currentexpression = EXPRESSIONCOUNT-1;
    }
  }
  else if (!usesans){
    if (currentexpression <= 0){
      currentexpression = EXPRESSIONCOUNT-1;
    }
  }
  expression_select(currentexpression);
}

void nextColor(){
  currentcolor++;
  if(currentcolor >= COLORCOUNT){
    currentcolor = 0;
  }
  color_select(currentcolor);
}

void nextBG(){
  currentbg++;
  if(currentbg >= BGCOUNT){
    currentbg = 0;
  }
  bg_select(currentbg);
}

void setColor(int color){
  LEDCUSTOMCOLOR = color;
  matrix->setTextColor(LEDCUSTOMCOLOR);
  randomMode();
  random_expression();
}


/*
void setBGColor(int color){
  BACKGROUNDCOLOR = color;
  BGIMAGE = BGSOLID;
  randomMode();
  random_expression();
}
*/

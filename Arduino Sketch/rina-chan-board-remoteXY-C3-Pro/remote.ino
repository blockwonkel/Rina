
/*
char currentpress = NOPRESS;
int lastpress = 0;
bool newbutton = false;
bool chord = false;
*/


void setupPhysicalRemote() {
  /*
  pinMode(REMOTEUP, INPUT_PULLUP);
  pinMode(REMOTELEFT, INPUT_PULLUP);
  pinMode(REMOTERIGHT, INPUT_PULLUP);
  */
  pinMode(EXTRAGROUND, OUTPUT);
  digitalWrite(EXTRAGROUND, LOW);


  upbtn.attachClick(upClick);
  leftbtn.attachLongPressStart(leftHold);
  //leftbtn.attachDuringLongPress(leftHold);
  leftbtn.attachLongPressStop(noHold);
  rightbtn.attachLongPressStart(rightHold);
  //rightbtn.attachDuringLongPress(rightHold);
  rightbtn.attachLongPressStop(noHold);
}



void setupRemote(){
  RemoteXY.rgb_1_r    = 255;
  RemoteXY.rgb_1_b    = 255;
  RemoteXY.rgb_1_g      = 0;
  RemoteXY.rgb_2_r      = 0;
  RemoteXY.rgb_2_b      = 0;
  RemoteXY.rgb_2_g      = 0;
  RemoteXY.brightness = map(BRIGHTNESS, 0, 255, -100, 100);
  RemoteXY.blinker      = 1;
  RemoteXY.randomButton = 1;
  RemoteXY.PresetMode   = 3;
  RemoteXY.exp_1        = 9;
  RemoteXY.exp_2        = 9;
  RemoteXY.exp_3        = 9;
  RemoteXY.exp_4        = 9;
  RemoteXY.exp_5        = 9;
  RemoteXY.exp_6        = 9;
  RemoteXY.exp_7        = 9;
  RemoteXY.exp_8        = 9;
  RemoteXY.EX           = 9;
  //old_exp_slider  = RemoteXY.exp_slider;
  old_exp_1       = RemoteXY.exp_1;
  old_exp_2       = RemoteXY.exp_2;
  old_exp_3       = RemoteXY.exp_3;
  old_exp_4       = RemoteXY.exp_4;
  old_exp_5       = RemoteXY.exp_5;
  old_exp_6       = RemoteXY.exp_6;
  old_exp_7       = RemoteXY.exp_7;
  old_exp_8       = RemoteXY.exp_8;
  old_EX          = RemoteXY.EX;
  old_rgb_1_r     = RemoteXY.rgb_1_r;
  old_rgb_1_g     = RemoteXY.rgb_1_g;
  old_rgb_1_b     = RemoteXY.rgb_1_b;
  old_rgb_2_r     = RemoteXY.rgb_2_r;
  old_rgb_2_g     = RemoteXY.rgb_2_g;
  old_rgb_2_b     = RemoteXY.rgb_2_b;
  old_brightness  = RemoteXY.brightness;
  old_PresetMode  = RemoteXY.PresetMode;
}

void processRemote(){
/*  if (!RemoteXY.connect_flag){ //Default to Random Mode if no phone connected
    randomMode();
  }
  */
    processPreset();
    processBlinkMode();
    processRGB();
    processEXP();
    processBRIGHT();
    processTXT();
}

void processPreset(){
  //if new mode selected, clear the expression menu
  if (old_PresetMode!=RemoteXY.PresetMode){
    RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
    old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    old_PresetMode = RemoteXY.PresetMode;
  }
  switch (RemoteXY.PresetMode){
    case 0: strcpy(RemoteXY.PresetIndicator, PresetText(0).c_str()); break;
    case 1: strcpy(RemoteXY.PresetIndicator, PresetText(1).c_str()); break;
    case 2: strcpy(RemoteXY.PresetIndicator, PresetText(2).c_str()); break;
    case 3: strcpy(RemoteXY.PresetIndicator, "Direct Mode"); return;
    default: return;
  }

    //check for selected expression
    int newEXP = 1;
    if (old_exp_1!=RemoteXY.exp_1){
      newEXP = RemoteXY.exp_1 + 1;
      RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_2!=RemoteXY.exp_2){
      newEXP = RemoteXY.exp_2 + 10;
      RemoteXY.exp_1 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_3!=RemoteXY.exp_3){
      newEXP = RemoteXY.exp_3 + 19;
      RemoteXY.exp_1 = RemoteXY.exp_2 =  RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_4!=RemoteXY.exp_4){
      newEXP = RemoteXY.exp_4 + 28;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 =  RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_5!=RemoteXY.exp_5){
      newEXP = RemoteXY.exp_5 + 37;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 =  old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_6!=RemoteXY.exp_6){
      newEXP = RemoteXY.exp_6 + 46;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 =  RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 =  old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_7!=RemoteXY.exp_7){
      newEXP = RemoteXY.exp_7 + 55;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 =  RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 =  old_exp_8 = 9;
    }
    else if (old_exp_8!=RemoteXY.exp_8){
      newEXP = RemoteXY.exp_8 + 64;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = 9;
    }
    //if no new expression chosen, return;
    else{
      return;
    }

    

    //if overflowed, clear the menu and do nothing else
    if (newEXP>EXPRESSIONCOUNT){
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
      return;
    } 

    //do nothing if same expression chosen
    else if (newEXP==getPreset(RemoteXY.PresetMode)){
      return;
    }
    //rewrite new preset and switch back to direct mode
    else if (newEXP!=getPreset(RemoteXY.PresetMode)){
      setPreset(RemoteXY.PresetMode, newEXP);
      RemoteXY.PresetMode = 3;
    }
    
    
    return;
}

void setPreset(int presetID, int presetexpression){
  switch (presetID){
    case 0: presetUp    = presetexpression;     preferences.putInt("presetUp", presetexpression);     break;
    case 1: presetLeft  = presetexpression;     preferences.putInt("presetLeft", presetexpression);   break;
    case 2: presetRight = presetexpression;     preferences.putInt("presetRight", presetexpression);  break;
    default: return;
  } 
}

int getPreset(int presetID){
  switch (presetID){
    case 0: return preferences.getInt("presetUp",     2);
    case 1: return preferences.getInt("presetLeft",  22);
    case 2: return preferences.getInt("presetRight", 21);
  }
}

String PresetText (int presetID){
  char PresetTextOutput[50];
  switch (presetID){
    /*
    case 0: strcpy(PresetTextOutput, "UP="); break;
    case 1: strcpy(PresetTextOutput, "LEFT="); break;
    case 2: strcpy(PresetTextOutput, "RIGHT="); break;
    default: break;
    */
    case 0: sprintf(PresetTextOutput, "↑=%s",      numberText(presetUp));     break;
    case 1: sprintf(PresetTextOutput, "←=%s",     numberText(presetLeft));    break;
    case 2: sprintf(PresetTextOutput, "→=%s",     numberText(presetRight));   break;
    default: break;
  }
    return PresetTextOutput;
}

void processRGB(){
    processRGBBG();
    processRGBFG();
}

void processBlinkMode(){
  remoteBlinking = RemoteXY.blinker;
}

void processRGBFG(){
  //do nothing if no new input
  if ((old_rgb_1_r == RemoteXY.rgb_1_r)&&(old_rgb_1_g == RemoteXY.rgb_1_g)&&(old_rgb_1_b == RemoteXY.rgb_1_b)){
    return;
  }
  else{
    //Convert remoteXY RGB value to LED value
    
    uint16_t newRED    = map(RemoteXY.rgb_1_r, 0, 255, 0, 31) << 11;
    uint16_t newGREEN  = map(RemoteXY.rgb_1_g, 0, 255, 0, 63) <<  5;
    uint16_t newBLUE   = map(RemoteXY.rgb_1_b, 0, 255, 0, 31);

    randomcolormode = false;
    LEDCUSTOMCOLOR = newRED + newGREEN + newBLUE;
    
    //matrix->setTextColor(LEDCUSTOMCOLOR);
    
    //copy new values to old values
    old_rgb_1_r     = RemoteXY.rgb_1_r;
    old_rgb_1_g     = RemoteXY.rgb_1_g;
    old_rgb_1_b     = RemoteXY.rgb_1_b;

    //refresh display so that color updates immediately rather than at next update
    if (displaymode == TEXTMODE){
      if (strncmp(RemoteXY.text,"!",1)!=0)
      renderString(RemoteXY.text);
    }
    else{
      expression_select(currentexpression);
      //expression_select(currentexpression);
    }
    return;
  }
}

void processRGBBG(){
  //do nothing if no new input
  if ((old_rgb_2_r == RemoteXY.rgb_2_r)&&(old_rgb_2_g == RemoteXY.rgb_2_g)&&(old_rgb_2_b == RemoteXY.rgb_2_b)){
    return;
  }
  else{
    //Convert remoteXY RGB value to LED value
    uint16_t newRED    = map(RemoteXY.rgb_2_r, 0, 255, 0, 5) << 11;
    uint16_t newGREEN  = map(RemoteXY.rgb_2_g, 0, 255, 0, 10) <<  5;
    uint16_t newBLUE   = map(RemoteXY.rgb_2_b, 0, 255, 0, 5);

    BACKGROUNDCOLOR = newRED + newGREEN + newBLUE;
    
    //copy new values to old values
    old_rgb_2_r     = RemoteXY.rgb_2_r;
    old_rgb_2_g     = RemoteXY.rgb_2_g;
    old_rgb_2_b     = RemoteXY.rgb_2_b;

    //refresh display so that color updates immediately rather than at next update
    if (displaymode == TEXTMODE){
      renderString(RemoteXY.text);
    }
    else{
      expression_select(currentexpression);
      //expression_select(currentexpression);
    }
    return;
  }  
}
void processEXP(){
  if (RemoteXY.randomButton){
    randommode = true;
    //randomMode();
  }
  
  else {
    randommode = false;
  }

  //If no new RemoteXY input, don't do anything
  if (old_exp_1==RemoteXY.exp_1 && old_exp_2==RemoteXY.exp_2 && old_exp_3==RemoteXY.exp_3 && old_exp_4==RemoteXY.exp_4 && old_exp_5==RemoteXY.exp_5 && old_exp_6==RemoteXY.exp_6 && old_exp_7==RemoteXY.exp_7 && old_exp_8==RemoteXY.exp_8 && old_EX==RemoteXY.EX      ){
    return;
  }

  //If new BG pattern chosen,
  else if (old_EX!=RemoteXY.EX){
      old_EX    = RemoteXY.EX;
      switch (RemoteXY.EX){
        case 0: BGIMAGE = 0; randomcolormode = false; randomBGmode = false;          break;
        case 1: BGIMAGE = 1; LEDCUSTOMCOLOR = LED_WHITE_HIGH;                        break;
        case 2: BGIMAGE = 2; LEDCUSTOMCOLOR = LED_WHITE_HIGH;                        break;
        case 7: LEDCUSTOMCOLOR  = randomColor(); randomcolormode = true;             break;
        case 8: BACKGROUNDCOLOR = randomColor(); randomBGmode = true;                break;
        default: break;
      }
      return; 
    }
    
  //If new expression chosen and in Direct Mode (not changing a preset)
  else if (RemoteXY.PresetMode==3) {
    
    
    int newEXP = 1;
    if (old_exp_1!=RemoteXY.exp_1){
      newEXP = RemoteXY.exp_1 + 1;
      RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_2!=RemoteXY.exp_2){
      newEXP = RemoteXY.exp_2 + 10;
      RemoteXY.exp_1 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_3!=RemoteXY.exp_3){
      newEXP = RemoteXY.exp_3 + 19;
      RemoteXY.exp_1 = RemoteXY.exp_2 =  RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_4!=RemoteXY.exp_4){
      newEXP = RemoteXY.exp_4 + 28;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 =  RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_5!=RemoteXY.exp_5){
      newEXP = RemoteXY.exp_5 + 37;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 =  old_exp_6 = old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_6!=RemoteXY.exp_6){
      newEXP = RemoteXY.exp_6 + 46;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 =  RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 =  old_exp_7 = old_exp_8 = 9;
    }
    else if (old_exp_7!=RemoteXY.exp_7){
      newEXP = RemoteXY.exp_7 + 55;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 =  RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 =  old_exp_8 = 9;
    }
    else if (old_exp_8!=RemoteXY.exp_8){
      newEXP = RemoteXY.exp_8 + 64;
      RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = 9;
    }

    

    //if overflowed, go to Random Mode and clear the menu
    if (newEXP>EXPRESSIONCOUNT){
      randommode = true;
      RemoteXY.randomButton = 1;
      //randomMode();
       RemoteXY.exp_1 = RemoteXY.exp_2 = RemoteXY.exp_3 = RemoteXY.exp_4 = RemoteXY.exp_5 = RemoteXY.exp_6 = RemoteXY.exp_7 = RemoteXY.exp_8 = 9;
      old_exp_1 = old_exp_2 = old_exp_3 = old_exp_4 = old_exp_5 = old_exp_6 = old_exp_7 = old_exp_8 = 9;
    } 
    
    //Select new Expression;
    else {
      randommode = false;
      repeatmode = false;
      RemoteXY.randomButton = 0;
      currentexpression = newEXP;
      expression_select(currentexpression);
    }

    displaymode = EXPRESSIONMODE;

    //Copy new values to old values
    old_exp_1 = RemoteXY.exp_1;
    old_exp_2 = RemoteXY.exp_2;
    old_exp_3 = RemoteXY.exp_3;
    old_exp_4 = RemoteXY.exp_4;
    old_exp_5 = RemoteXY.exp_5;
    old_exp_6 = RemoteXY.exp_6;
    old_exp_7 = RemoteXY.exp_7;
    old_exp_8 = RemoteXY.exp_8;
    old_EX    = RemoteXY.EX;    
  }
}

//Old slider version of expression input
/*
void processEXP(){
  //do nothing if no new input
  if (old_exp_slider==RemoteXY.exp_slider){
    return;
  }
  else{
    //Scale remoteXY slider value to number of programmed expressions
    int newEXP = map(RemoteXY.exp_slider, 0, 100, 0, EXPRESSIONCOUNT);
    
    //If at 0 position, go to Random Mode
    if (newEXP==0){
      randommode = true;
      randomMode();
    }
    
    //Else, select new Expression
    
    else{
      randommode = false;
      repeatmode = false;
      currentexpression = newEXP;
      expression_select(currentexpression);
      //expression_select(currentexpression);
    }

    displaymode = EXPRESSIONMODE;

    //copy new value to old value
    old_exp_slider = RemoteXY.exp_slider;
    return;
    
  }
  
}
*/

void processBRIGHT(){
  //do nothing if no new input
  if (old_brightness == RemoteXY.brightness){
    return;
  }
  
  //Convert remoteXY brightness value to LED value
  BRIGHTNESS = map(RemoteXY.brightness, -100, 100, 0, 255);

  //Set the new brightness
  matrix->setBrightness(BRIGHTNESS);

  //Copy new value to old value
  old_brightness = RemoteXY.brightness;

  //refresh display so that brightness updates immediately rather than at next update
    if (displaymode==TEXTMODE){
      renderString(RemoteXY.text);
    }
    else{
      expression_select(currentexpression);
      //expression_select(currentexpression);
    }
  return;
}

void processTXT(){
  //do nothing if text field empty
  if (strcmp(RemoteXY.text,"")==0){
    //randommode = false;
    return;
  }
  
  //don't rerender short text
  else if (strcmp(oldtext, RemoteXY.text)==0 && strlen(oldtext)<=12){
    return;
  }
  
  //render any new text
  else{
    renderString(RemoteXY.text);
    randommode = false;
    RemoteXY.randomButton = 0;
  
    //Copy new value to old value
    strcpy(oldtext,RemoteXY.text);
    displaymode = TEXTMODE;
    return;
  }
}


void processPhysicalRemote(){
  upbtn.tick();
  leftbtn.tick();
  rightbtn.tick();
}

static void upClick(){
  //press up to go toggle photo mode (happy, no blinking)
  if (remoteBlinking==1){
    renderString("SMILE");
    delay(1000);
    happy();
    remoteBlinking = 0;
    RemoteXY.blinker = 0;
    RemoteXY.randomButton = 0;
    randommode = false;
    currentexpression = presetUp;
    expression_select(currentexpression);
  }
  else{
    neutralblink();
    remoteBlinking = 1;
    RemoteXY.blinker = 1;
    RemoteXY.randomButton = 1;
    randommode = true;
    randomMode();
  }
}

static void leftHold(){
  remoteBlinking = 0;
  old_blinker = RemoteXY.blinker;
  RemoteXY.blinker = 0;
  RemoteXY.randomButton = 0;
  randommode = false;
  currentexpression = presetLeft;
  expression_select(currentexpression);
}

static void rightHold(){
  remoteBlinking = 0;
  old_blinker = RemoteXY.blinker;
  RemoteXY.blinker = 0;
  RemoteXY.randomButton = 0;
  randommode = false;
  currentexpression = presetRight;
  expression_select(currentexpression);
}


static void noHold(){
  RemoteXY.blinker = old_blinker;
  RemoteXY.randomButton = 1;
  randommode = true;
  randomMode();
}

//Old 4-button Remote Stuff
/*
void processRemote() {
  checkButton();
  if (newbutton) {

    //No Press -> clear chord
    if (currentpress == NOPRESS){
      chord = false;
    }

    //Chorded Button Presses
    else if (currentpress == ABC) {
      randommode = false;
      FastLED.clear();  FastLED.show();
      FastLED.show();; //matrix->show();
    }

    else if (currentpress == AB) {
      currentexpression = 5;
      nextColor();
      expression_select(currentexpression);
    }

    else if (currentpress == BC) {
      randommode = false;
      winkright();
    }

    else if (currentpress == CD) {
      currentexpression = 5;
      nextBG();
      expression_select(currentexpression);
    }


    if (chord == false) {
      //A Button - Exit Random Mode and go to Next Expression
      if (currentpress == APRESS) {
        randommode = false;
        nextExpression();
      }
      //B Button - Exit Random Mode and go to Previous Expression
      else if (currentpress == BPRESS) {
        randommode = false;
        previousExpression();
      }
      //C Button - Start Random Mode
      else if (currentpress == CPRESS) {
        randommode = true;
        random_expression();
      }
      //D Button - Favorite Expression

      else if (currentpress == DPRESS) {
        randommode = false;
        sans();
        sanseye();
      }
    }

  }
}
void checkButton() {
  lastpress = currentpress;  //Save last button press
  
  //If multiple buttons are pressed, set chord flag to true. chord flag will be cleared once all buttons are released
  if (RemoteXY.button_1 + RemoteXY.button_2 + RemoteXY.button_3 + RemoteXY.button_4 > 1) {
    chord = true;
  }

  //Check for chorded button presses
  if (RemoteXY.button_1 && RemoteXY.button_2 && RemoteXY.button_3 && RemoteXY.button_4) {
    currentpress = ABCD;
  }

  else if (RemoteXY.button_1 && RemoteXY.button_2 && !RemoteXY.button_3 && !RemoteXY.button_4) {
    currentpress = AB;
  }

  else if (RemoteXY.button_1 && !RemoteXY.button_2 && !RemoteXY.button_3 && RemoteXY.button_4) {
    currentpress = AD;
  }

  else if (!RemoteXY.button_1 && RemoteXY.button_2 && RemoteXY.button_3 && !RemoteXY.button_4) {
    currentpress = BC;
  }

  else if (!RemoteXY.button_1 && !RemoteXY.button_2 && RemoteXY.button_3 && RemoteXY.button_4) {
    currentpress = CD;
  }

  else if (RemoteXY.button_1 && RemoteXY.button_2 && RemoteXY.button_3 && !RemoteXY.button_4) {
    currentpress = ABC;
  }

  //Check for single button presses
  else if (RemoteXY.button_1) {
    currentpress = APRESS;
  }
  else if (RemoteXY.button_2) {
    currentpress = BPRESS;
  }
  else if (RemoteXY.button_3) {
    currentpress = CPRESS;
  }
  else if (RemoteXY.button_4) {
    currentpress = DPRESS;
  }
  else {
    currentpress = NOPRESS;
  }


  //Check if a new button has been pressed
  if (lastpress != currentpress) {
    newbutton = true;
  }
  else {
    newbutton = false;
  }
}

*/

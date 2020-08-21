#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

#define OLED_RESET     -1 // Reset pin
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define LOGO_HEIGHT   11
#define LOGO_WIDTH    80

void setup() {
    Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address for 128x64
    Serial.println(F("SSD1306 UNRESPONSIVE"));
    for(;;); 
  }
  /////////////////////////
  
  pinMode(8,  OUTPUT); //LED CLUSTER 0
  pinMode(4,  OUTPUT);
  pinMode(12, OUTPUT);
  
  pinMode(A1, OUTPUT); //LED CLUSTER 1
  pinMode(A0, OUTPUT);
  pinMode(A2, OUTPUT);

  pinMode(13, INPUT);  // BUTTON

  pinMode(7,  OUTPUT); //SWITCH 0
  pinMode(6,  INPUT);
  pinMode(5,  OUTPUT);
  
  pinMode(11,  OUTPUT); //SWITCH 1
  pinMode(10,  INPUT);
  pinMode(9,   OUTPUT);

  digitalWrite(8,  1); //r0
  digitalWrite(4,  1); //g0
  digitalWrite(12, 1); //b0

  digitalWrite(A1, 1); //r1
  digitalWrite(A0, 1); //g1
  digitalWrite(A2, 1); //b1

  digitalWrite(7,  1);
  //digitalWrite(6, );
  digitalWrite(5,  0);

  digitalWrite(11, 1);
  //digitalWrite(10,);
  digitalWrite(9,  0);


  display.clearDisplay();
  display.display(); 
  display.setTextSize(1);
}

void loop() {
  int i=0;
  
  for(i=0; i<=7; )
  {
    if(digitalRead(13)==1)
    {
      delay(200);
    i++;
    }
      if(i == 0)
      {
        
        display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,1);
  display.println("SELECT CONFIG");
  display.setCursor(0,12);
  display.println("---------------------");
  
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,18);
  display.println(" MODE 1: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,27);
  display.println(" MODE 2: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,36);
  display.println(" MODE 3: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,45);
  display.println(" MODE 4: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,54);
  display.println(" MODE 5: ");
  display.display();
          if(digitalRead(6) == 0 && digitalRead(10) == 0)
          {
            digitalWrite(8,  1); //r0
            digitalWrite(4,  1); //g0
            digitalWrite(12, 1); //b0

            digitalWrite(A1, 1); //r1
            digitalWrite(A0, 1); //g1
            digitalWrite(A2, 1); //b1
          }
          else if(digitalRead(6) == 0 && digitalRead(10) == 1)
          {
            digitalWrite(8,  1); //r0
            digitalWrite(4,  1); //g0
            digitalWrite(12, 1); //b0

            digitalWrite(A1, 1); //r1
            digitalWrite(A0, 0); //g1
            digitalWrite(A2, 1); //b1
          }
          else if(digitalRead(6) == 1 && digitalRead(10) == 0)
          {
            digitalWrite(8,  1); //r0
            digitalWrite(4,  0); //g0
            digitalWrite(12, 1); //b0

            digitalWrite(A1, 1); //r1
            digitalWrite(A0, 1); //g1
            digitalWrite(A2, 1); //b1
          }
          else if(digitalRead(6) == 1 && digitalRead(10) == 1)
          {
            digitalWrite(8,  1); //r0
            digitalWrite(4,  0); //g0
            digitalWrite(12, 1); //b0

            digitalWrite(A1, 1); //r1
            digitalWrite(A0, 0); //g1
            digitalWrite(A2, 1); //b1
          }
      }
      else if(i == 1)
      {

        display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,1);
  display.println("SELECT CONFIG: 01");
  display.setCursor(0,12);
  display.println("---------------------");
  
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(0,18);
  display.println(" MODE 1: SELECTED ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,27);
  display.println(" MODE 2: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,36);
  display.println(" MODE 3: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,45);
  display.println(" MODE 4: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,54);
  display.println(" MODE 5: ");
  display.display();
  
      }
      else if(i == 2)
      {

        display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,1);
  display.println("SELECT CONFIG: 02");
  display.setCursor(0,12);
  display.println("---------------------");
  
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,18);
  display.println(" MODE 1: ");
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(0,27);
  display.println(" MODE 2: SELECTED ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,36);
  display.println(" MODE 3: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,45);
  display.println(" MODE 4: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,54);
  display.println(" MODE 5: ");
  display.display();
  
      }
      else if(i == 3)
      {

        display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,1);
  display.println("SELECT CONFIG: 03");
  display.setCursor(0,12);
  display.println("---------------------");
  
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,18);
  display.println(" MODE 1: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,27);
  display.println(" MODE 2: ");
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(0,36);
  display.println(" MODE 3: SELECTED ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,45);
  display.println(" MODE 4: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,54);
  display.println(" MODE 5: ");
  display.display();
  
      }   
      else if(i == 4)
      {

        display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,1);
  display.println("SELECT CONFIG: 04");
  display.setCursor(0,12);
  display.println("---------------------");
  
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,18);
  display.println(" MODE 1: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,27);
  display.println(" MODE 2: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,36);
  display.println(" MODE 3: ");
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(0,45);
  display.println(" MODE 4: SELECTED ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,54);
  display.println(" MODE 5: ");
  display.display();
  
      } 
      else if(i == 5)
      {

        display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,1);
  display.println("SELECT CONFIG: 05");
  display.setCursor(0,12);
  display.println("---------------------");
  
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,18);
  display.println(" MODE 1: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,27);
  display.println(" MODE 2: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,36);
  display.println(" MODE 3: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,45);
  display.println(" MODE 4: ");
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(0,54);
  display.println(" MODE 5: SELECTED ");
  display.display();
  
      } 
      else if(i == 6)
      {

        display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,1);
  display.println("SELECT CONFIG: 06");
  display.setCursor(0,12);
  display.println("---------------------");
  
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,18);
  display.println(" : ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,27);
  display.println(" MODE 3: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,36);
  display.println(" MODE 4: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,45);
  display.println(" MODE 5: ");
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(0,54);
  display.println(" MODE 6: SELECTED ");
  display.display();
  
      } 
      else if(i == 7)
      {

        display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,1);
  display.println("SELECT CONFIG: 07");
  display.setCursor(0,12);
  display.println("---------------------");
  
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,18);
  display.println(" : ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,27);
  display.println(" MODE 4: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,36);
  display.println(" MODE 5: ");
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,45);
  display.println(" MODE 6: ");
  display.setTextColor(SSD1306_BLACK, SSD1306_WHITE);
  display.setCursor(0,54);
  display.println(" MODE 7: SELECTED ");
  display.display();
  
      } 
      

  }
}

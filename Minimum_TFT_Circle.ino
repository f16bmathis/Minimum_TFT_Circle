/*  Using TFT from Amazon, HiLetgo 2.4" ILI9341 240X320 TFT LCD Display 
 *  with Touch Panel LCD for Arduino UNO MEGA2560, 
 *  will also work with ELEGOO UNO R3 2.8 Inches TFT Touch Screen with 
 *  SD Card Socket w/All Technical Data in CD for 
 *  Arduino UNO R3. 
 *  Edited by Brian Mathis 21 Dec 2021
 */

 #include <MCUFRIEND_kbv.h>         // added Library mcufriend.kbv
 MCUFRIEND_kbv tft;

 #define BLACK   0x0000             // Some colors defined for later use
 #define BLUE    0x001F             // You could name RED as 48tjhe89 or whatever
 #define RED     0xF800
 #define GREEN   0x07E0
 #define MAGENTA 0xF81F
 #define YELLOW  0xFFE0
 #define WHITE   0xFFFF
 #undef FLIP_180

 int clockCenterX=120;              // X center of a Touch Screen that is 240 side 0 Left to side 240 Right
 int clockCenterY=160;              // Y center of a Touch Screen that is 320 top 0 to bottom 320

 void setup() {

  uint16_t identifier = tft.readID();

  tft.begin(identifier);

  }

 void loop(void)

 {
  tft.fillScreen(BLACK);             // Start with a fresh screen otherwise screen is off-white

 for (int i=0; i<2; i++)             // The bigger "i" is, the more circles drawn inside original
 
 {
    tft.drawCircle(clockCenterX, clockCenterY, 100-i, GREEN);   // Circles X, Y, Size and Color
  }

 delay(500);
   }

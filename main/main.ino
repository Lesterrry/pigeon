/***************************
COPYRIGHT LESTER COVEY (me@lestercovey.ml),
2022

***************************/

#define VERSION "v0.1.0-beta"
#define PIN_BUZZER A1

#define _LCD_TYPE 2
#include <Battery_Shield.h>
#include <LCD_1602_RUS_ALL.h>

PROGMEM const char* const S_PIGEON = "Pigeon";
PROGMEM const char* const S_VERSION = VERSION;

Battery_Shield battery;
LCD_1602_RUS lcd(8, 9, 4, 5, 6, 7);

void setup() {
	Serial.begin(9600);
	battery.begin(0.0128f);
	lcd.begin(16, 2);
	Serial.println(battery.getLevel());
	draw(S_PIGEON, S_VERSION);
	greetingBeep();
	delay(1000);
}

void loop() {

}
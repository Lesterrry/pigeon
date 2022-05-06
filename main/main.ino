/***************************
COPYRIGHT LESTER COVEY (me@lestercovey.ml),
2022

***************************/

#define GSM_DEBUG
#define VERSION "v0.1.0-beta"
#define PIN_BUZZER A1

// #define _LCD_TYPE 2
// #include <Battery_Shield.h>
// #include <LCD_1602_RUS_ALL.h>
#include <iarduino_GSM.h>
#include <softwareserial.h>

// PROGMEM const char* const S_PIGEON = "Pigeon";
// PROGMEM const char* const S_VERSION = VERSION;
PROGMEM const char* const S_OK = "OK";
PROGMEM const char* const S_UNAVAILABLE = "unavailable";
PROGMEM const char* const S_UNKNOWN = "unknown";
PROGMEM const char* const S_SLEEPING = "sleeping";
PROGMEM const char* const S_PINPUKREQ = "pin/puk required";
PROGMEM const char* const S_NOSIM = "no sim";
PROGMEM const char* const S_NOSERVICE = "no service";


// Battery_Shield battery;
// LCD_1602_RUS lcd(8, 9, 4, 5, 6, 7);

void setup() {
	iarduino_GSM gsm;
	SoftwareSerial sfs(7,8);
	gsm.begin(sfs);
	#ifdef GSM_DEBUG
		Serial.begin(9600);
		Serial.print("Initializing module...");
		while(gsm.status() != GSM_OK) { Serial.println(GSMStatusString(gsm.status())); delay(1000); } Serial.println(" OK!");
	#endif
	// battery.begin(0.0128f);
	// lcd.begin(16, 2);
	// Serial.println(battery.getLevel());
	// draw(S_PIGEON, S_VERSION);
	// greetingBeep();
	// delay(1000);
}

void loop() {

}
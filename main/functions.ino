/***************************
COPYRIGHT LESTER COVEY (me@lestercovey.ml),
2022

***************************/

// void draw(const char* firstRow, const char* secondRow) {
// 	lcd.setCursor(0, 0);
// 	lcd.print(firstRow);
// 	lcd.setCursor(0, 1);
// 	lcd.print(secondRow);
// }

// void drawAndDivideFirstRow(const char* firstRowLeftPiece, const char* firstRowRightPiece, const char* secondRow) {
// 	lcd.setCursor(0, 0);
// 	lcd.print(firstRowLeftPiece);
// 	lcd.setCursor(16 - Size(firstRowRightPiece), 0);
// 	lcd.print(firstRowRightPiece);
// 	lcd.setCursor(0, 1);
// 	lcd.print(secondRow);
// }

// void drawAndDivideSecondRow(const char* firstRow, const char* secondRowLeftPiece, const char* secondRowRightPiece) {

// }

// void drawAndDivide(const char* firstRowLeftPiece, const char* firstRowRightPiece, const char* secondRowLeftPiece) {

// }

// void greetingBeep() {
// 	tone(PIN_BUZZER, 200);
// 	delay(120);
// 	tone(PIN_BUZZER, 500);
// 	delay(120);
// 	tone(PIN_BUZZER, 300);
// 	delay(120);
// 	noTone(PIN_BUZZER);
// }

// int Size(const char* of) {
// 	int i = 0;
// 	while (of[i] != '\0') i++;
// 	return i;
// }

String GSMStatusString(int from) {
	switch (from) {
		case GSM_OK:
			return S_OK;
			break;
		case GSM_UNAVAILABLE:
			return S_UNAVAILABLE;
			break;
		case GSM_SLEEP:
			return S_SLEEPING;
			break;
		case GSM_SIM_PIN:
		case GSM_SIM_PUK:
		case GSM_SIM_PIN2:
		case GSM_SIM_PUK2:
			return S_PINPUKREQ;
			break;
		case GSM_SIM_NO:
		case GSM_SIM_FAULT:
		case GSM_SIM_ERR:
			return S_NOSIM;
			break;
		case GSM_REG_NO:
		case GSM_REG_FAULT:
		case GSM_REG_ERR:
			return S_NOSERVICE;
			break;
		default:
			return S_UNKNOWN;
			break;
	}
}
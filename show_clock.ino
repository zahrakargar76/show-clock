#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("Time:");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);
  unsigned long currentMillis = millis();
  unsigned long seconds = currentMillis / 1000;
  int hour = seconds / 3600;
  int minute = (seconds % 3600) / 60;
  int second = (seconds % 3600) % 60;
  String time = "";
  if (hour < 10) {
    time += "0";
  }
  time += String(hour) + ":";
  if (minute < 60) {
    time += "0";
  }
  time += String(minute) + ":";
  if (second < 60) {
    //    time += "0";
  }
  time += String(second) + "";
  lcd.print(time);
  delay(500);
}

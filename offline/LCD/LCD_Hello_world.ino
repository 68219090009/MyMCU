/*LAB8.1.2 LCD_Hello_world.ino */
//https://app.cirkitdesigner.com/project/fcc53fb4-3d6f-4fa5-b7ab-aa77ceb4cf09


#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

   lcd.init();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("LAB 8.1.2");
  lcd.setCursor(0, 1);
  lcd.print("Hello world");
}

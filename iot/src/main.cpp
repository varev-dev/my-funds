#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

#define LCD_WIDTH 16
#define LCD_HEIGHT 2

#define I2C_SDA 21
#define I2C_SCL 22

LiquidCrystal_I2C lcd(0x27, LCD_WIDTH, LCD_HEIGHT);

byte heart[8] = {
    0b00000,
    0b01010,
    0b11111,
    0b11111,
    0b11111,
    0b01110,
    0b00100,
    0b00000
};

byte heart2[8] = {
    0b11111,
    0b10101,
    0b00000,
    0b00000,
    0b00000,
    0b10001,
    0b11011,
    0b11111
};

byte black[8] = {
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111,
    0b11111
};

void setup() {
    lcd.init(I2C_SDA, I2C_SCL);
    lcd.backlight();
    lcd.createChar(0, heart);
    lcd.createChar(1, heart2);
    lcd.createChar(2, black);
    lcd.setCursor(0, 0);
    lcd.print("-AaBbCcDdEeFfGg");
    lcd.setCursor(0, 1);
    lcd.print("IiJjKkLlMmNnOoPp");
}

void loop() {
}
//
// Created by varev on 8/15/24.
//

#ifndef LIQUIDCRYSTALDISPLAY_H
#define LIQUIDCRYSTALDISPLAY_H

#include <LiquidCrystal_I2C.h>
#include <chrono>

class LiquidCrystalDisplay : LiquidCrystal_I2C {
private:
    const uint8_t address;
    const uint8_t cols;
    const uint8_t rows;
    const std::chrono::milliseconds scroll_delay;
    const std::chrono::system_clock::time_point last_scroll;

protected:
    String* data;
    void scroll();
public:
    LiquidCrystalDisplay(uint8_t addr, uint8_t cols, uint8_t rows);
    ~LiquidCrystalDisplay();

    void printList(String *text, uint8_t position_y);
};

#endif //LIQUIDCRYSTALDISPLAY_H

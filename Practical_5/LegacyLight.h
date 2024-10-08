#ifndef LEGACYLIGHT_H
#define LEGACYLIGHT_H

#include <iostream>
using namespace std;

class LegacyLight {
private:
    bool isOn;
    int brightness; // 0-100 for dimming
    bool bulbFailure; // If the bulb needs replacement

public:
    LegacyLight();
    void switchOn();
    void switchOff();
    void dim(int level);
    void reportBulbFailure();
    void replaceBulb();
    bool isLightOn();
};

#endif // LEGACYLIGHT_H

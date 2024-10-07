#include "LegacyLight.h"

LegacyLight::LegacyLight() : isOn(false), brightness(100), bulbFailure(false) {}

void LegacyLight::switchOn() {
    if (!bulbFailure) {
        isOn = true;
        cout << "Light is ON at brightness: " << brightness << "%" << endl;
    } else {
        cout << "Cannot switch on light. Bulb failure detected." << endl;
    }
}

void LegacyLight::switchOff() {
    isOn = false;
    cout << "Light is OFF." << endl;
}

void LegacyLight::dim(int level) {
    if (!bulbFailure) {
        if (level < 0 || level > 100) {
            cout << "Invalid brightness level. Please choose between 0 and 100." << endl;
        } else {
            brightness = level;
            cout << "Brightness set to " << brightness << "%" << endl;
        }
    } else {
        cout << "Cannot dim light. Bulb failure detected." << endl;
    }
}

void LegacyLight::reportBulbFailure() {
    bulbFailure = true;
    cout << "Bulb failure reported. Replace bulb." << endl;
}

void LegacyLight::replaceBulb() {
    bulbFailure = false;
    cout << "Bulb replaced successfully." << endl;
}

bool LegacyLight::isLightOn() {
    return isOn;
}

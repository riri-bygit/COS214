#include "Device.h"

// Implementation of LegacyThermostat
LegacyThermostat::LegacyThermostat(int temp) : legacyTemperature(temp) {}

int LegacyThermostat::getLegacyTemperature() {
    return legacyTemperature;
}

void LegacyThermostat::setLegacyTemperature(int temp) {
    legacyTemperature = temp;
}

// Implementation of Light
Light::Light() : isOn(false) {}

void Light::toggle() {
    isOn = !isOn;
}

void Light::performAction() {
    toggle();
    std::cout << "Light toggled " << (isOn ? "on" : "off") << "." << std::endl;
}

std::string Light::getStatus() {
    return isOn ? "Light is on" : "Light is off";
}

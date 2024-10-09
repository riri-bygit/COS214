/**
 * @file LegacyThermostat.cpp
 * @author Paballo Diyase u23528142
 * @brief Legacy thermostat that has not been adapted to be smart (basic functionality)
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */


#include "LegacyThermostat.h"

LegacyThermostat::LegacyThermostat() : temperature(22.0), isOn(false), unit("Celsius") {}

void LegacyThermostat::setTemp(double temp) {
    if (isOn) {
        if (unit == "Celsius" && (temp < 10 || temp > 30)) {
            cout << "Temperature out of range for Celsius. (10-30°C)" << endl;
        } else if (unit == "Fahrenheit" && (temp < 50 || temp > 86)) {
            cout << "Temperature out of range for Fahrenheit. (50-86°F)" << endl;
        } else {
            temperature = temp;
            cout << "Temperature set to " << temperature << "° " << unit << endl;
        }
    } else {
        cout << "Thermostat is off. Turn it on to set temperature." << endl;
    }
}

double LegacyThermostat::getTemp() {
    return temperature;
}

void LegacyThermostat::turnOn() {
    isOn = true;
    cout << "Thermostat is now ON." << endl;
}

void LegacyThermostat::turnOff() {
    isOn = false;
    cout << "Thermostat is now OFF." << endl;
}

void LegacyThermostat::setUnit(const string &u) {
    if (u == "Celsius" || u == "Fahrenheit") {
        unit = u;
        cout << "Unit set to " << unit << endl;
    } else {
        cout << "Invalid unit. Please choose 'Celsius' or 'Fahrenheit'." << endl;
    }
}

string LegacyThermostat::getUnit() {
    return unit;
}

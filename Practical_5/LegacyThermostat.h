#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H

#include <iostream>
#include <string>
using namespace std;

class LegacyThermostat {
private:
    double temperature;
    bool isOn; // Simulate if the thermostat is turned on
    string unit; // "Celsius" or "Fahrenheit"

public:
    LegacyThermostat();
    void setTemp(double temp);
    double getTemp();
    void turnOn();
    void turnOff();
    void setUnit(const string &u);
    string getUnit();
};

#endif // LEGACYTHERMOSTAT_H

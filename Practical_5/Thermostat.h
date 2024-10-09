#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include <iostream>
using namespace std;
#include "LegacyThermostat.h"
#include "Device.h"
class Thermostat : public Device
{
private:
    int currentTemp;
    LegacyThermostat *thermo;
    int targetTemp;

public:
    string getStatus();
    void performAction();
    void increaseTemp();
    void decreaseTemp();
    std::string getDeviceType();
    Thermostat(LegacyThermostat *thermo);
    ~Thermostat();
    void setTemperature(int Temp);
};

#endif

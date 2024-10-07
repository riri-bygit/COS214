#ifndef THERMOSTAT_H
#define THERMOSTAT_H
#include <iostream>
using namespace std;

class Thermostat
{
private:
    int currentTemp;

    int targetTemp;

public:
    string getStatus();
    void performAction();
    void increaseTemp();
    void decreaseTemp();
    std::string getDeviceType();
    Thermostat();
    ~Thermostat();
    void setTemperature(int Temp);
};

#endif

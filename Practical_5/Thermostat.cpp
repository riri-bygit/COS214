#include "Thermostat.h"
using namespace std;
#include <iostream>

string Thermostat::getStatus()
{
    return "Current temperature: " + std::to_string(currentTemp) + "°C";
}
void Thermostat::performAction()
{
    if (currentTemp < targetTemp)
    {
        currentTemp++;
        std::cout << "Increasing Temperature to " << currentTemp << "°C" << std::endl;
    }
    else if (currentTemp > targetTemp)
    {
        currentTemp--;
        std::cout << "Decreasing Temperature to " << currentTemp << "°C" << std::endl;
    }
    else
    {
        std::cout << "Temperature is already at the target: " << currentTemp << "°C" << std::endl;
    }
}
void Thermostat::setTemperature(int newTemp)
{
    targetTemp = newTemp;
    std::cout << "Target temperature set to " << targetTemp << "°C" << std::endl;
}
std::string Thermostat::getDeviceType()
{
    return "Thermostat\n";
}
Thermostat ::Thermostat()
{
    currentTemp = 20;
    currentTemp = 25;
}
Thermostat ::~Thermostat()
{
}

void Thermostat ::increaseTemp()
{
    if (currentTemp < targetTemp)
    {
        currentTemp++;
        std::cout << "Increasing Temperature to " << currentTemp << "°C" << std::endl;
    }
    getStatus();
}
void Thermostat ::decreaseTemp()
{
    if (currentTemp > targetTemp)
    {
        currentTemp--;
        std::cout << "Decreasing Temperature to " << currentTemp << "°C" << std::endl;
    }
    getStatus();
}
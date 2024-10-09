/**
 * @file Thermostat.cpp
 * @author Paballo Diyase u23528142
 * @brief Retrieves the current temperature status of the thermostat.
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "Thermostat.h"

/**
 * @brief Retrieves the current temperature status of the thermostat.
 * @return A string representing the current temperature.
 */
std::string Thermostat::getStatus()
{
    return "Current temperature: " + std::to_string(currentTemp) + "°C";
}

/**
 * @brief Performs actions to adjust the temperature based on the target.
 */
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

/**
 * @brief Sets the target temperature.
 * @param newTemp The new target temperature.
 */
void Thermostat::setTemperature(int newTemp)
{
    targetTemp = newTemp;
    std::cout << "Target temperature set to " << targetTemp << "°C" << std::endl;
}

/**
 * @brief Retrieves the device type of the thermostat.
 * @return A string representing the device type ("Thermostat").
 */
std::string Thermostat::getDeviceType()
{
    return "Thermostat\n";
}

/**
 * @brief Constructs the Thermostat with a legacy thermostat object.
 * @param thermo Pointer to the LegacyThermostat object.
 */
Thermostat::Thermostat(LegacyThermostat *thermo) : thermo(thermo)
{
    currentTemp = 20;
    targetTemp = 25;
}

/**
 * @brief Destructor for the Thermostat class.
 */
Thermostat::~Thermostat() {}

/**
 * @brief Increases the temperature by 1 degree.
 */
void Thermostat::increaseTemp()
{
    if (currentTemp < targetTemp)
    {
        currentTemp++;
        std::cout << "Increasing Temperature to " << currentTemp << "°C" << std::endl;
    }
    getStatus();
}

/**
 * @brief Decreases the temperature by 1 degree.
 */
void Thermostat::decreaseTemp()
{
    if (currentTemp > targetTemp)
    {
        currentTemp--;
        std::cout << "Decreasing Temperature to " << currentTemp << "°C" << std::endl;
    }
    getStatus();
}

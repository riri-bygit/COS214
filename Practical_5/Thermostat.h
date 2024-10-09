/**
 * @file Thermostat.h
 * @author Paballo Diyase u23528142
 * @brief Concrete class representing a thermostat that can control the room temperature.
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include <iostream>
#include "LegacyThermostat.h"

/**
 * @class Thermostat
 * @brief Concrete class representing a thermostat that can control the room temperature.
 */
class Thermostat
{
private:
    int currentTemp;    ///< The current temperature of the thermostat.
    int targetTemp;     ///< The target temperature for the thermostat.
    LegacyThermostat *thermo; ///< Pointer to the legacy thermostat being used.

public:
    /**
     * @brief Retrieves the current temperature status of the thermostat.
     * @return A string representing the current temperature.
     */
    std::string getStatus();

    /**
     * @brief Adjusts the thermostat temperature to reach the target temperature.
     */
    void performAction();

    /**
     * @brief Increases the temperature by 1 degree.
     */
    void increaseTemp();

    /**
     * @brief Decreases the temperature by 1 degree.
     */
    void decreaseTemp();

    /**
     * @brief Retrieves the device type of the thermostat.
     * @return A string representing the device type ("Thermostat").
     */
    std::string getDeviceType();

    /**
     * @brief Constructor for the Thermostat class.
     * @param thermo Pointer to the LegacyThermostat object.
     */
    Thermostat(LegacyThermostat *thermo);

    /**
     * @brief Destructor for the Thermostat class.
     */
    ~Thermostat();

    /**
     * @brief Sets the target temperature.
     * @param Temp The target temperature to be set.
     */
    void setTemperature(int Temp);
};

#endif // THERMOSTAT_H

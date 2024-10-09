/**
 * @file IncreaseTemp.cpp
 * @author Paballo Diyase u23528142
 * @brief Executes the increase temperature command on the thermostat.
 * @version 0.1
 * @date 2024-10-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "IncreaseTemp.h"

/**
 * @brief Executes the increase temperature command on the thermostat.
 * If the thermostat is available, it calls the increaseTemp method of the Thermostat.
 */
void IncreaseTemp::execute() {
    if (thermostat) {
        thermostat->increaseTemp();
    }
}

/**
 * @brief Constructor for IncreaseTemp.
 * Initializes the command with a Thermostat object to increase its temperature.
 * @param thermo Pointer to a Thermostat object.
 */
IncreaseTemp::IncreaseTemp(Thermostat *thermo) : thermostat(thermo) {}

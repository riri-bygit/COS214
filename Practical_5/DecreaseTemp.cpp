/**
 * @file DecreaseTemp.cpp
 * @brief Implementation of the DecreaseTemp command that decreases the temperature of a thermostat.
 */

#include "DecreaseTemp.h"
/**
 * @brief Executes the decrease temperature command.
 * 
 * This method decreases the temperature on the associated thermostat by invoking the decreaseTemp() method.
 */

void DecreaseTemp::execute()
{
    if (thermostat)
    {
        thermostat->decreaseTemp(); 
    }
}

/**
 * @brief Constructor for the DecreaseTemp class.
 * 
 * @param thermo A pointer to a Thermostat object that the command will act on.
 */

DecreaseTemp::DecreaseTemp(Thermostat *thermo) : thermostat(thermo) {}
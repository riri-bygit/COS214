/**
 * @file DecreaseTemp.h
 * @brief Header file for the DecreaseTemp command class.
 */

#ifndef DECREASETEMP_H
#define DECREASETEMP_H
#include <iostream>
#include "Command.h"
#include "Thermostat.h"
using namespace std;

/**
 * @class DecreaseTemp
 * @brief A command that decreases the temperature of a thermostat.
 * 
 * This class implements the Command interface and is responsible for decreasing the temperature of the 
 * thermostat by invoking the decreaseTemp() method of the associated Thermostat object.
 */
class DecreaseTemp : public Command
{
    Thermostat *thermostat;

public:
    void execute();
    DecreaseTemp(Thermostat *thermo);
};

#endif
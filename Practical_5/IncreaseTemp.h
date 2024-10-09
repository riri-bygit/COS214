#ifndef INCREASETEMP_H
#define INCREASETEMP_H

#include <iostream>
#include "Command.h"
#include "Thermostat.h"

using namespace std;

/**
 * @brief Command class for increasing the temperature of a thermostat.
 */
class IncreaseTemp : public Command {
private:
    Thermostat *thermostat; ///< Pointer to the Thermostat device.

public:
    /**
     * @brief Executes the increase temperature command on the thermostat.
     */
    void execute();

    /**
     * @brief Constructor for IncreaseTemp.
     * @param thermo Pointer to a Thermostat object to increase the temperature.
     */
    IncreaseTemp(Thermostat *thermo);
};

#endif // INCREASETEMP_H

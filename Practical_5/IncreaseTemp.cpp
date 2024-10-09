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

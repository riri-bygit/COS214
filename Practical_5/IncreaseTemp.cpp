#include "IncreaseTemp.h"
void IncreaseTemp::execute()
{
    if (thermostat)
    {
        thermostat->increaseTemp();
    }
}

IncreaseTemp::IncreaseTemp(Thermostat *thermo) : thermostat(thermo) {}
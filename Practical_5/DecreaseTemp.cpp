#include "DecreaseTemp.h"
void DecreaseTemp::execute()
{
    if (thermostat)
    {
        thermostat->decreaseTemp(); 
    }
}

DecreaseTemp::DecreaseTemp(Thermostat *thermo) : thermostat(thermo) {}
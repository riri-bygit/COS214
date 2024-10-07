#ifndef DECREASETEMP_H
#define DECREASETEMP_H
#include <iostream>
#include "Command.h"
#include "Thermostat.h"
using namespace std;
class DecreaseTemp : public Command
{
    Thermostat *thermostat;

public:
    void execute();
    DecreaseTemp(Thermostat *thermo);
};

#endif
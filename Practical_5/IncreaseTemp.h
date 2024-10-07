#ifndef IncreaseTemp_H
#define IncreaseTemp_H
#include <iostream>
#include "Command.h"
#include "Thermostat.h"
using namespace std;
class IncreaseTemp : public Command
{
    Thermostat *thermostat;

public:
    void execute();
    IncreaseTemp(Thermostat *thermo);
};

#endif
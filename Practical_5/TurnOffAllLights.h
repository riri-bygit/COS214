
#ifndef TurnOffAllLights_H
#define TurnOffAllLights_H
#include <iostream>
#include "Command.h"
#include "Room.h"
using namespace std;
class TurnOffAllLights : public Command
{
    Room *room;

public:
    void execute();
    TurnOffAllLights(Room *room);
};

#endif
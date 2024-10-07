
#ifndef SetTemperature_H
#define SetTemperature_H
#include <iostream>
#include "Command.h"
#include "Room.h"
using namespace std;
class SetTemperature : public Command
{
    Room *room;

public:
    void execute();
    SetTemperature(Room *room);
};

#endif
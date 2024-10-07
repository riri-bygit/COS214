
#ifndef LockAllDoors_H
#define LockAllDoors_H
#include <iostream>
#include "Command.h"
#include "Room.h"
using namespace std;
class LockAllDoors : public Command
{
    Room *room;

public:
    void execute();
    LockAllDoors(Room *room);
};

#endif
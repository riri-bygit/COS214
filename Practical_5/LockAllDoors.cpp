
#include "LockAllDoors.h"
void LockAllDoors::execute()
{
    if (room)
    {
        room->LockAllDors();
    }
}
LockAllDoors::LockAllDoors(Room *room) : room(room)
{
}
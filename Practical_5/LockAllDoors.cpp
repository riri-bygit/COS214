
#include "LockAllDoors.h"
void LockAllDoors::execute()
{
    if (room)
    {
        room->LockAllDoors();
    }
}
LockAllDoors::LockAllDoors(Room *room) : room(room)
{
}
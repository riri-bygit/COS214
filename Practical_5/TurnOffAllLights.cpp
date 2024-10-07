#include "TurnOffAllLights.h"
void TurnOffAllLights::execute()
{
    if (room)
    {
        room->TurnOffAllLights();
    }
}
TurnOffAllLights::TurnOffAllLights(Room *room) : room(room)
{
}
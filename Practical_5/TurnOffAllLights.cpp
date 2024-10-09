/**
 * @file TurnOffAllLights.cpp
 * @author Paballo Diyase u23528142
 * @brief Executes the command to turn off all the lights in the room.
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "TurnOffAllLights.h"

/**
 * @brief Executes the command to turn off all the lights in the room.
 */
void TurnOffAllLights::execute()
{
    if (room)
    {
        room->TurnOffAllLights(); // Calls the room's TurnOffAllLights method.
    }
}

/**
 * @brief Constructs the TurnOffAllLights command with the specified room.
 * @param room Pointer to the Room object.
 */
TurnOffAllLights::TurnOffAllLights(Room *room) : room(room) {}

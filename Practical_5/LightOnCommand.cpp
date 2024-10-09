/**
 * @file LightOnCommand.cpp
 * @author Paballo Diyase u23528142
 * @brief Executes the command to turn on the light.
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "LightOnCommand.h"

/**
 * @brief Executes the command to turn on the light.
 * 
 * Checks if the light object is valid and calls its turnOn method.
 */
void LightOnCommand::execute()
{
    if (light)
    {
        light->turnOn();
    }
}

/**
 * @brief Constructs a LightOnCommand with the specified Light object.
 * 
 * @param light Pointer to a Light object.
 */
LightOnCommand::LightOnCommand(Light *light) : light(light)
{
}

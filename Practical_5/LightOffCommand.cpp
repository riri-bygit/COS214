
/**
 * @file LightOffCommand.cpp
 * @author Paballo Diyase u23528142
 * @brief Executes the command to turn off the light.
 * @version 0.1
 * @date 2024-10-09
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include "LightOffCommand.h"

/**
 * @brief Executes the command to turn off the light.
 * 
 * Checks if the light object is valid and calls its turnOff method.
 */
void LightOffCommand::execute()
{
    if (light)
    {
        light->turnOff();
    }
}

/**
 * @brief Constructs a LightOffCommand with the specified Light object.
 * 
 * @param light Pointer to a Light object.
 */
LightOffCommand::LightOffCommand(Light *light) : light(light)
{
}

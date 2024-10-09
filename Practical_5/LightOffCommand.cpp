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

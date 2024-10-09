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

#include "LightOnCommand.h"
void LightOnCommand::execute()
{
    if (light)
    {
        light->turnOn();
    }
}
LightOnCommand::LightOnCommand(Light *light) : light(light)
{
}
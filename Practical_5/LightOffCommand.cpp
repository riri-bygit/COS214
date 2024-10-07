#include "LightOffCommand.h"
void LightOffCommand::execute()
{
    if(light)
    {
        light->turnOff();
    }
}
LightOffCommand::LightOffCommand(Light *light) : light(light)
{
}
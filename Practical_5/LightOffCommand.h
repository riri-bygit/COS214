#ifndef LIGHTOFFCommand_H
#define LIGHTOFFCommand_H
#include <iostream>
#include "Command.h"
#include "Light.h"
using namespace std;
class LightOffCommand : public Command
{
    Light *light;

public:
    void execute();
    LightOffCommand(Light *light);
};

#endif
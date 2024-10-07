#ifndef LIGHTOnCommand_H
#define LIGHTOnCommand_H
#include <iostream>
#include "Command.h"
#include "Light.h"
using namespace std;
class LightOnCommand : public Command
{
    Light *light;

public:
    void execute();
    LightOnCommand(Light *light);
};

#endif
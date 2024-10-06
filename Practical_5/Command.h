#ifndef Command_H
#define Command_H
#include <iostream>
using namespace std;
class Command
{
public:
    virtual void execute() = 0; // Pure virtual function for executing the command
    virtual ~Command() {}       // Virtual destructor for proper cleanup
};

#endif
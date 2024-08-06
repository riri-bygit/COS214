#ifndef Boatman_h
#define Boatman_h
#include "Soldiers.h"
#include <iostream>
using namespace std;

class Boatman : public Soldiers
{
public:
    Boatman() : Soldiers(100, 50, 75, 10, "Boatman") {}
    void engage();
    void disengage();

private:
    void prepare();
    void execute();
    void retreat();
    void rest();
};

#endif
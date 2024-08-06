#ifndef ShieldBearer_h
#define ShieldBearer_h
#include "Soldiers.h"
#include <iostream>
using namespace std;

class ShieldBearer : public Soldiers
{
public:
    ShieldBearer() : Soldiers(100, 50, 75, 10, "ShieldBearer") {}
    void engage();
    void disengage();

private:
    void prepare();
    void execute();
    void retreat();
    void rest();
};

#endif
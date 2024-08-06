#ifndef Infantry_h
#define Infantry_h
#include "Soldiers.h"
#include <iostream>
using namespace std;

class Infantry : public Soldiers
{
public:
    Infantry() : Soldiers(100, 50, 75, 10, "Infantry") {}

     void engage();
     void disengage();

private:
     void prepare();
     void execute();
     void retreat();
     void rest();
};

#endif
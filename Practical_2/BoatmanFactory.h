#ifndef BoatmanFactory_h
#define BoatmanFactory_h
#include "SoldierFactory.h"
#include "Boatman.h"
#include <iostream>
using namespace std;

class BoatmanFactory : public SoldierFactory
{
public:
    Soldiers *createUnit() override
    {
        return new Boatman();
    }
};

#endif
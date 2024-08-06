#ifndef InfantryFactory_h
#define InfantryFactory_h
#include "SoldierFactory.h"
#include "Infantry.h"
#include <iostream>
using namespace std;

class InfantryFactory : public SoldierFactory
{
public:
    Soldiers *createUnit() override
    {
        return new Infantry();
    }
};

#endif
#ifndef ShieldBearerFactory_h
#define ShieldBearerFactory_h
#include "SoldierFactory.h"
#include "ShieldBearer.h"
#include <iostream>
using namespace std;

class ShieldBearerFactory : public SoldierFactory
{
public:
    Soldiers *createUnit() override
    {
        return new ShieldBearer();
    }
};

#endif
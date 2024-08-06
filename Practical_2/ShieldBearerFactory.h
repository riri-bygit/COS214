#ifndef ShieldBearerFactory_h
#define ShieldBearerFactory_h
#include "SoldierFactory.h"
#include "ShieldBearer.h"
#include <iostream>
using namespace std;

class ShieldBearerFactory : public SoldierFactory
{
protected:
    Soldiers *createUnit();
    int calculateTotalHealthPerUnit();
    int calculateTotalDamagePerUnit();
    int calculateTotalDefencePerUnit();
public:
    ~ShieldBearerFactory();
};

#endif
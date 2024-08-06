#ifndef BoatmanFactory_h
#define BoatmanFactory_h
#include "SoldierFactory.h"
#include "Boatman.h"
#include <iostream>
using namespace std;

class BoatmanFactory : public SoldierFactory
{
protected:
    Soldiers *createUnit();
    int calculateTotalHealthPerUnit();
    int calculateTotalDamagePerUnit();
    int calculateTotalDefencePerUnit();
public:
    ~BoatmanFactory();
};

#endif
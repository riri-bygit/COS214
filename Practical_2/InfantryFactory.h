#ifndef InfantryFactory_h
#define InfantryFactory_h

#include "SoldierFactory.h"
#include "Infantry.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

using namespace std;

class InfantryFactory : public SoldierFactory
{

public:
    Soldiers *createUnit();
    ~InfantryFactory();
    int calculateTotalHealthPerUnit();
    int calculateTotalDamagePerUnit();
    int calculateTotalDefencePerUnit();
};

#endif
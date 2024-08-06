#ifndef InfantryFactory_h
#define InfantryFactory_h
#include "SoldierFactory.h"
#include "Infantry.h"
#include <iostream>
using namespace std;

class InfantryFactory : public SoldierFactory
{
protected:
    Soldiers *createUnit();

public:
    ~InfantryFactory();
};

#endif
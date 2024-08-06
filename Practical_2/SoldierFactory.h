#ifndef SoldierFactory_h
#define SoldierFactory_h
#include "Soldiers.h"
#include <iostream>
using namespace std;

class SoldierFactory
{

public:
    virtual ~SoldierFactory();

protected:
    virtual Soldiers *createUnit() = 0;
    virtual int calculateTotalHealthPerUnit();
    virtual int calculateTotalDamagePerUnit();
    virtual int calculateTotalDefencePerUnit();

private:
    Soldiers *soldiers;
};

#endif
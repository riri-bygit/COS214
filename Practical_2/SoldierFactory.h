#ifndef SoldierFactory_h
#define SoldierFactory_h

#include "Soldiers.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

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
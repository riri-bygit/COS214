#ifndef BoatmanFactory_h
#define BoatmanFactory_h
#include "SoldierFactory.h"
#include "Boatman.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>


using namespace std;

class BoatmanFactory : public SoldierFactory
{
protected:
    Soldiers *createUnit();

public:
    ~BoatmanFactory();
};

#endif
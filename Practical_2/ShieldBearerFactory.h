#ifndef ShieldBearerFactory_h
#define ShieldBearerFactory_h

#include "SoldierFactory.h"
#include "ShieldBearer.h"
#include "Weapon.h"

#include <vector>
#include <string>
#include <iostream>
#include <map>
#include <list>

using namespace std;

class ShieldBearerFactory : public SoldierFactory
{
protected:
    Soldiers *createUnit();
    
public:
    ~ShieldBearerFactory();
};

#endif
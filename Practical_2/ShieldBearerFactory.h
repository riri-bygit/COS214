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
    
public:
    ~ShieldBearerFactory();
};

#endif

#include "ShieldBearerFactory.h"
#include <iostream>
using namespace std;

Soldiers *createUnit()
{
    return new ShieldBearer;
}

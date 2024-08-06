#include "InfantryFactory.h"
#include <iostream>
using namespace std;

Soldiers *createUnit()
{
    return new Infantry;
}

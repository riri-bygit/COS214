#include "BoatmanFactory.h"
#include <iostream>
using namespace std;

Soldiers *createUnit()
{
    return new Boatman;
}
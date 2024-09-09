#ifndef TRUCKFACTORY_H
#define TRUCKFACTORY_H

#include "Truck.h"
#include <iostream>

class TruckFactory {
public:
    virtual ~TruckFactory() {}
    virtual Truck* buyTruck(int id, int capacity) = 0;
    virtual void sellTruck(Truck* truck) = 0;
};

#endif
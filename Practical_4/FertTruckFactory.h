#ifndef FERTTRUCKFACTORY_H
#define FERTTRUCKFACTORY_H

#include "TruckFactory.h"

class FertTruckFactory : public TruckFactory {
public:
    Truck* buyTruck(int id, int capacity) override;
    void sellTruck(Truck* truck) override;
};
#endif


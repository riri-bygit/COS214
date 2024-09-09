#ifndef DELTRUCKFACTORY_H
#define DELTRUCKFACTORY_H

#include "TruckFactory.h"

class DelTruckFactory : public TruckFactory {
public:
    Truck* buyTruck(int id, int capacity) override;
    void sellTruck(Truck* truck) override;
};
#endif

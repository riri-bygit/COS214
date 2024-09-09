#ifndef DeliveryTruck_H
#define DeliveryTruck_H

#include "Truck.h"
#include <iostream>
#include <string>

class DeliveryTruck : public Truck {
private:
    int capacity;

public:
    DeliveryTruck(int id, int cap);
    void startEngine() override;
    int getTruckID() override;
};

#endif

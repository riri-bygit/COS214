#ifndef FertilizerTruck_H
#define FertilizerTruck_H

#include "Truck.h"
#include <iostream>
#include <string>


class FertilizerTruck : public Truck {
private:
    int capacity;

public:
    FertilizerTruck(int id, int cap);
    void startEngine() override;
    int getTruckID() override;
};

#endif

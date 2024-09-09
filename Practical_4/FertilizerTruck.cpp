#include "FertilizerTruck.h"
#include <iostream>

FertilizerTruck::FertilizerTruck(int id, int cap) {
    truckID = id;
    capacity = cap;
    status = "idle";
}

void FertilizerTruck::startEngine() {
    std::cout << "Fertilizer Truck starting engine...\n";
}

int FertilizerTruck:: getTruckID() {


    return truckID;
}

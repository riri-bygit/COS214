#include "DeliveryTruck.h"
#include <iostream>

DeliveryTruck::DeliveryTruck(int id, int cap) {
    truckID = id;
    capacity = cap;
    status = "idle";
}

void DeliveryTruck::startEngine() {
    std::cout << "Delivery Truck starting engine...\n";
}

int DeliveryTruck:: getTruckID() {

    return truckID;
}

#include "FertTruckFactory.h"

Truck* FertTruckFactory::buyTruck(int id, int capacity) {
    std::cout << "Fertilizer Truck bought with ID: " << id << " and capacity: " << capacity << std::endl;
    return new FertilizerTruck(id, capacity);
}

void FertTruckFactory::sellTruck(Truck* truck) {
    std::cout << "Selling Fertilizer Truck with ID: " << truck->getTruckID() << std::endl;
    delete truck;
}

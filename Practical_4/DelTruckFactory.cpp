#include "DelTruckFactory.h"

Truck* DelTruckFactory::buyTruck(int id, int capacity) {
    std::cout << "Delivery Truck bought with ID: " << id << " and capacity: " << capacity << std::endl;
    return new DeliveryTruck(id, capacity);
}

void DelTruckFactory::sellTruck(Truck* truck) {
    std::cout << "Selling Delivery Truck with ID: " << truck->getTruckID() << std::endl;
    delete truck;
}

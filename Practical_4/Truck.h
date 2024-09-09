#ifndef TRUCK_H
#define TRUCK_H

#include <string>

class Truck {
protected:
    int truckID;
    std::string status;

public:
    virtual void startEngine() = 0;
    virtual int  getTruckID() = 0;
};

#endif

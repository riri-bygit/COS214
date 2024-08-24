#ifndef WOODLAND_H
#define WOODLAND_H

#include "Terrain.h"

class Woodland : public Terrain {
public:
    void description() const override {
        std::cout << "This is a Woodland terrain.\n";
    }
};

#endif 

#ifndef RIVERBANK_H
#define RIVERBANK_H

#include "Terrain.h"

class Riverbank : public Terrain {
public:
    void description() const override {
        std::cout << "This is a Riverbank terrain.\n";
    }
};

#endif

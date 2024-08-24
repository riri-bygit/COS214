#ifndef OPENFIELD_H
#define OPENFIELD_H

#include "Terrain.h"

class OpenField : public Terrain {
public:
    void description() const override {
        std::cout << "This is an Open Field terrain.\n";
    }
};

#endif

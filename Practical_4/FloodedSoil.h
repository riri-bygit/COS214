#ifndef FLOODEDSOIL_H
#define FLOODEDSOIL_H

#include "SoilState.h"
#include <iostream>

class FloodedSoil : public SoilState {
public:
    FloodedSoil();
    int harvestCrops() override;
    void irrigate() override;
    std::string getName() override;
    void fertilize() override;
};

#endif

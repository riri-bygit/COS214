#ifndef DRYSOIL_H
#define DRYSOIL_H

#include "SoilState.h"
#include <iostream>
#include <string>


class DrySoil : public SoilState {
public:
    DrySoil();
    int harvestCrops() override;
    void irrigate() override;
    std::string getName() override;
    void fertilize() override;
};

#endif

#define FRUITFULSOIL_H

#include "SoilState.h"
#include <iostream>


class FruitfulSoil : public SoilState {
public:
    FruitfulSoil();
    int harvestCrops() override;
    void irrigate() override;
    std::string getName() override;
    void fertilize() override;
};

#endif

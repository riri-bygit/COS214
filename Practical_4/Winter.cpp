#include "Winter.h"

Winter::Winter() {
    name = "Winter";
}

std::string Winter::getName() {
    return name;
}

void Winter::affectSoilState(CropField* cropField) {
    std::cout << "Winter: Reducing soil moisture and switching to DrySoil.\n";
    cropField->setMoistureLevels(cropField->getMoistureLevels() - 30);
    cropField->setFertLevels(cropField->getFertLevels() - 10);
    cropField->setSoilState(new DrySoil());
}

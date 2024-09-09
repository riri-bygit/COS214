#include "Summer.h"

Summer::Summer() {
    name = "Summer";
}

std::string Summer::getName() {
    return name;
}

void Summer::affectSoilState(CropField* cropField) {
    std::cout << "Summer: Increasing soil moisture and fertilization levels.\n";
    cropField->setMoistureLevels(cropField->getMoistureLevels() + 20);
    cropField->setFertLevels(cropField->getFertLevels() + 10);
    cropField->setSoilState(new FruitfulSoil());  // Set the soil state to fruitful during summer
}

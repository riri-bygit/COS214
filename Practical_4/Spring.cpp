#include "Spring.h"

Spring::Spring() {
    name = "Spring";
}

std::string Spring::getName() {
    return name;
}

void Spring::affectSoilState(CropField* cropField) {
    std::cout << "Spring: Restoring soil moisture and preparing for planting.\n";
    cropField->setMoistureLevels(cropField->getMoistureLevels() + 30);
    cropField->setFertLevels(cropField->getFertLevels() + 15);
    cropField->setSoilState(new FruitfulSoil());  // Set the soil state to fruitful during spring
}

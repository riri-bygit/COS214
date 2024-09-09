#include "Autumn.h"

Autumn::Autumn() {
    name = "Autumn";
}

std::string Autumn::getName() {
    return name;
}

void Autumn::affectSoilState(CropField* cropField) {
    std::cout << "Autumn: Preparing soil for harvest and slightly decreasing moisture.\n";
    cropField->setMoistureLevels(cropField->getMoistureLevels() - 10);
    cropField->setFertLevels(cropField->getFertLevels() + 5);
    cropField->getSoilState()->harvestCrops();  // Trigger harvest
}


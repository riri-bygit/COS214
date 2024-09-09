
#include "CropField.h"
CropField::CropField(SoilState *initialState, int initialMoisture, int initialFertilizer)
    : soilState(initialState), moistureLevel(initialMoisture), fertilizerLevel(initialFertilizer) {}

void CropField::setSoilState(SoilState *newState)
{
    soilState = newState;
}

SoilState *CropField::getSoilState() const
{
    return soilState;
}

void CropField::rain()
{
    soilState->rain();
}

int CropField::harvestCrops() const
{
    return soilState->harvestCrops();
}

std::string CropField::getSoilStateName() const
{
    return soilState->getName();
}

// Accessor methods for moisture and fertilizer levels
int CropField::getMoistureLevel() const
{
    return moistureLevel;
}

int CropField::getFertilizerLevel() const
{
    return fertilizerLevel;
}

void CropField::setMoistureLevel(int level)
{
    moistureLevel = level;
}

void CropField::setFertilizerLevel(int level)
{
    fertilizerLevel = level;
}

// Display the current state of the crop field
void CropField::displayFieldStatus() const
{
    std::cout << "Current Soil State: " << getSoilStateName() << "\n";
    std::cout << "Moisture Level: " << moistureLevel << "\n";
    std::cout << "Fertilizer Level: " << fertilizerLevel << "\n";
}
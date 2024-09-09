
#include "CropField.h"
CropField::CropField(SoilState *initialState, int initialMoisture, int initialFertilizer)
    : soilState(initialState), moistureLevels(initialMoisture), fertilizerLevels(initialFertilizer) {}

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
int CropField::getMoistureLevels() const
{
    return moistureLevels;
}

int CropField::getFertLevels() const
{
    return fertilizerLevels;
}

void CropField::setMoistureLevels(int level)
{
    moistureLevels = level;
}

void CropField::setFertLevels(int level)
{
    fertilizerLevels = level;
}

// Display the current state of the crop field
void CropField::displayFieldStatus() const
{
    std::cout << "Current Soil State: " << getSoilStateName() << "\n";
    std::cout << "Moisture Level: " << moistureLevels << "\n";
    std::cout << "Fertilizer Level: " << fertilizerLevels << "\n";
}
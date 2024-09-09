#ifndef CROPFIELD_H
#define CROPFIELD_H
using namespace std;
#include <iostream>
class CropField
{
private:
    SoilState *soilState;
    int moistureLevels;
    int fertilizerLevels;

public:
    CropField(SoilState *initialState, int initialMoisture, int initialFertilizer);

    void setSoilState(SoilState *newState);

    SoilState *getSoilState() const;
    void rain();

    int harvestCrops() const;
    std::string getSoilStateName() const;

    int getMoistureLevels() const;
    int getFertLevels() const;
    void setMoistureLevels(int level);

    void setFertLevels(int level);

    void displayFieldStatus() const
    {
        std::cout << "Current Soil State: " << getSoilStateName() << "\n";
        std::cout << "Moisture Level: " << moistureLevels << "\n";
        std::cout << "Fertilizer Level: " << fertilizerLevels << "\n";
    }
};

#endif
#ifndef CROPFIELD_H
#define CROPFIELD_H
using namespace std;
#include <iostream>
class CropField
{
private:
    SoilState *soilState;
    int moistureLevel;
    int fertilizerLevel;

public:
    CropField(SoilState *initialState, int initialMoisture, int initialFertilizer);

    void setSoilState(SoilState *newState);

    SoilState *getSoilState() const;
    void rain();

    int harvestCrops() const;
    std::string getSoilStateName() const;

    int getMoistureLevel() const;
    int getFertilizerLevel() const;
    void setMoistureLevel(int level);

    void setFertilizerLevel(int level);

    void displayFieldStatus() const
    {
        std::cout << "Current Soil State: " << getSoilStateName() << "\n";
        std::cout << "Moisture Level: " << moistureLevel << "\n";
        std::cout << "Fertilizer Level: " << fertilizerLevel << "\n";
    }
};

#endif
#ifndef SOILSTATE_H
#define SOILSTATE_H

#include <string>

class SoilState {
protected:
    int yieldFactor;

public:
    virtual int harvestCrops() = 0;
    virtual void irrigate() = 0;
    virtual std::string getName() = 0;
    virtual void fertilize() = 0;
};

#endif

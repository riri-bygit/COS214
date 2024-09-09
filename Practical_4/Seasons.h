#ifndef SEASONS_H
#define SEASONS_H

#include "CropField.h"
#include <string>
#include <iostream>

class Seasons {
protected:
    std::string name;

public:
    virtual ~Seasons() {}
    virtual std::string getName() = 0;
    virtual void affectSoilState(CropField* cropField) = 0;
};

#endif

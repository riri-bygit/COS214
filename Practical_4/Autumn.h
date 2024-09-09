#ifndef AUTUMN_H
#define AUTUMN_H

#include "Seasons.h"

class Autumn : public Seasons {
public:
    Autumn();
    std::string getName() override;
    void affectSoilState(CropField* cropField) override;
};

#endif

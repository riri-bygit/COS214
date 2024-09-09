#ifndef WINTER_H
#define WINTER_H

#include "Seasons.h"

class Winter : public Seasons {
public:
    Winter();
    std::string getName() override;
    void affectSoilState(CropField* cropField) override;
};

#endif

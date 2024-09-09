#ifndef SUMMER_H
#define SUMMER_H

#include "Seasons.h"

class Summer : public Seasons {
public:
    Summer();
    std::string getName() override;
    void affectSoilState(CropField* cropField) override;
};

#endif

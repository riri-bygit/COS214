#ifndef SPRING_H
#define SPRING_H

#include "Seasons.h"

class Spring : public Seasons {
public:
    Spring();
    std::string getName() override;
    void affectSoilState(CropField* cropField) override;
};

#endif

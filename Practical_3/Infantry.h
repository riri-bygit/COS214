#ifndef INFANTRY_H
#define INFANTRY_H

#include "LegionUnit.h"

class Infantry : public LegionUnit {
protected:
    int defense;
    int combat;
public:
    Infantry(int def, int comb);
    void move() override;
    void attack() override;
};

#endif

#ifndef CAVALRY_H
#define CAVALRY_H

#include "LegionUnit.h"
#include <string>

class Cavalry : public LegionUnit {
protected:
    int mobility;
    std::string impact;
public:
    Cavalry(int mob, const std::string& imp);
    void move() override;
    void attack() override;
};

#endif

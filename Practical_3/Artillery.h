#ifndef ARTILLERY_H
#define ARTILLERY_H

#include "LegionUnit.h"
#include <string>

class Artillery : public LegionUnit {
protected:
    std::string support;
    std::string bombardment;
public:
    Artillery(const std::string& sup, const std::string& bomb);
    void move() override;
    void attack() override;
};

#endif

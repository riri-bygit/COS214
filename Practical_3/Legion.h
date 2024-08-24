#ifndef LEGION_H
#define LEGION_H

#include "LegionUnit.h"
#include <vector>

class UnitComponent {
public:
    virtual void move() = 0;
    virtual void fight() = 0;
    virtual void add(UnitComponent* component) {}
    virtual void remove(UnitComponent* component) {}
    virtual ~UnitComponent() = default;
};

class Legion : public UnitComponent {
private:
    std::vector<UnitComponent*> units;
public:
    void move() override;
    void fight() override;
    void add(UnitComponent* component) override;
    void remove(UnitComponent* component) override;
};

#endif

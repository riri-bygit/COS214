#ifndef UNITCOMPONENT_H
#define UNITCOMPONENT_H

class UnitComponent {
public:
    virtual void move() = 0;
    virtual void attack() = 0;
    virtual ~UnitComponent() {}
};

#endif

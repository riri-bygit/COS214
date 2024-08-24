#ifndef TERRAIN_H
#define TERRAIN_H

#include <iostream>

class Terrain {
public:
    virtual ~Terrain() = default;
    virtual void description() const = 0;
};

#endif
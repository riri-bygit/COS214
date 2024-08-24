#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

#include "LegionFactory.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class RiverbankFactory : public LegionFactory {
public:
    Infantry* createInfantry() override;
    Cavalry* createCavalry() override;
    Artillery* createArtillery() override;
};

#endif

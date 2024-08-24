#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

#include "LegionFactory.h"
#include "Infantry.h"
#include "Cavalry.h"
#include "Artillery.h"

class OpenFieldFactory : public LegionFactory {
public:
    Infantry* createInfantry() override;
    Cavalry* createCavalry() override;
    Artillery* createArtillery() override;
};

#endif

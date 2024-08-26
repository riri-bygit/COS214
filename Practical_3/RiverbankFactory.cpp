#include "RiverbankFactory.h"

Infantry *RiverbankFactory::createInfantry()
{
    return new RiverbankInfantry();
}

Cavalry *RiverbankFactory::createCavalry()
{
    return new RiverbankCavalry();
}

Artillery *RiverbankFactory::createArtillery()
{
    return new RiverbankArtillery();
}

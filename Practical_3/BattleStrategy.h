#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

class BattleStrategy
{
public:
    virtual void engage() = 0;
    virtual ~BattleStrategy() = default;
};

class Flanking : public BattleStrategy
{
public:
    void engage() override;
};

class Ambush : public BattleStrategy
{
public:
    void engage() override;
};

class Fortification : public BattleStrategy
{
public:
    void engage() override;
};

#endif

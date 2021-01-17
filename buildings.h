#pragma once

#include <vector>
#include <string>

class StoneQuarry : public Building
{
private:
    /* data */
public:
    StoneQuarry(/* args */);
    ~StoneQuarry();
};

StoneQuarry::StoneQuarry(/* args */)
{
}

StoneQuarry::~StoneQuarry()
{
}

class WoodCamp : public Building
{
private:
    /* data */
public:
    WoodCamp(/* args */);
    ~WoodCamp();
    void Tick();
};

WoodCamp::WoodCamp(/* args */)
{
}

WoodCamp::~WoodCamp()
{
}

void WoodCamp::Tick()
{
}
class ResourceBuilding : public Building
{
private:
    /* data */
public:
    ResourceBuilding(/* args */);
    ~ResourceBuilding();
    // Calculates the resource output for that iteration
    virtual void Tick();
};

ResourceBuilding::ResourceBuilding(/* args */)
{
}

ResourceBuilding::~ResourceBuilding()
{
}

class Building
{
public:
    Building(/* args */);
    ~Building();

    // TODO: Create property out of this
    std::string m_Name;

private:
};

Building::Building(/* args */)
{
}

Building::~Building()
{
}

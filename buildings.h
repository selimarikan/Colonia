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
};

WoodCamp::WoodCamp(/* args */)
{
}

WoodCamp::~WoodCamp()
{
}

class ResourceBuilding : public Building
{
private:
    /* data */
public:
    ResourceBuilding(/* args */);
    ~ResourceBuilding();
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

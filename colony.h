#pragma once

#include <vector>
#include <string>

#include "stockpile.h"
#include "buildings.h"

// This shall be the main `Map` or the main `Game`
class Colony
{
public:
    Colony(/* args */);
    ~Colony();
    void BuildBuilding(Building &building);

private:
    /* data */
    Stockpile m_Stockpile;
    std::vector<Building> m_Buildings;
};

Colony::Colony(/* args */)
{
}

Colony::~Colony()
{
}

void Colony::BuildBuilding(Building &building)
{
    m_Buildings.emplace_back(building);
}

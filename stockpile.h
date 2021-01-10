#pragma once

#include <vector>
#include <string>

#include "resources.h"

class Stockpile
{
public:
    Stockpile(/* args */);
    ~Stockpile();

    void Tick();

private:
    // std::vector<Resource> m_ResourceList;

    // Holds current absolute resource values
    uint32_t m_WoodAmount;
    uint32_t m_FoodAmount;
    uint32_t m_StoneAmount;
    uint32_t m_GoldAmount;
};

Stockpile::Stockpile(/* args */)
{
    // TODO: Maybe these define the periodic income / expenditure
    // m_ResourceList.emplace_back(WoodResource());
    // m_ResourceList.emplace_back(StoneResource());
}

Stockpile::~Stockpile()
{
}

// Calculates the income from each resource source
// Stockpile::Tick()
// {
// }
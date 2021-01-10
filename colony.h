#pragma once

#include <vector>
#include <string>

#include "stockpile.h"

// This shall be the main `Map` or the main `Game`
class Colony
{
public:
    Colony(/* args */);
    ~Colony();

private:
    /* data */
    Stockpile m_Stockpile;
};

Colony::Colony(/* args */)
{
}

Colony::~Colony()
{
}

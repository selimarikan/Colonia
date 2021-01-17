#pragma once

#include <iostream>
#include <map>
#include <string>
#include <vector>

enum class ResourceType : char
{
    NONE = 0,
    WOOD = 1,
    FOOD = 2,
    GOLD = 3,
    STONE = 4
};

static std::string ResourceToStr(const ResourceType &resource)
{
    switch (resource)
    {
    case ResourceType::NONE:
        return "Resource::None";
        break;
    case ResourceType::WOOD:
        return "Resource::Wood";
        break;
    case ResourceType::FOOD:
        return "Resource::Food";
        break;
    case ResourceType::GOLD:
        return "Resource::Gold";
        break;
    case ResourceType::STONE:
        return "Resource::Stone";
        break;
    }
}

class Building
{
public:
    Building(/* args */);
    ~Building();
    // The resource manager has to ensure that enough resources are available for upgrade.
    //  Building itself will not check the resources
    void Upgrade();

    std::string m_Name;
    int m_Level;

    // Type of resource needed for upgrade, amount of resource needed
    std::map<ResourceType, float> m_UpgradeCost;

    void Info();

private:
};

Building::Building(/* args */)
{
    // Start as unbuilt building
    m_Level = 0;
}

Building::~Building()
{
}

void Building::Upgrade()
{
    m_Level++;
}

void Building::Info()
{
    std::cout << "### Building : " << m_Name << "\n";
    std::cout << "### Level : " << m_Level << "\n";
    std::cout << "### Upgrade Cost Info ###\n";

    for (auto const &x : m_UpgradeCost)
    {
        std::cout << "### " << ResourceToStr(x.first) << " : " << x.second << "\n";
    }
    std::cout << "###                    ###\n";
}

class ResourceBuilding : public Building
{
private:
    /* data */
protected:
    float m_IncomeAmount;
    float m_IncomeMult;
    // Defines the income amount for that tick. Calculated in Tick()
    float m_TickIncome;

    ResourceType m_Type;

public:
    ResourceBuilding(/* args */);
    ~ResourceBuilding();

    // Calculates the resource output for that iteration
    void Tick();
};

ResourceBuilding::ResourceBuilding(/* args */)
{
}

ResourceBuilding::~ResourceBuilding()
{
}

void ResourceBuilding::Tick()
{
    // TODO: Create a good formulation
    m_TickIncome = (m_IncomeAmount * m_IncomeMult) + (m_Level * m_IncomeAmount * 0.4f);
}

class StoneQuarry : public ResourceBuilding
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

class WoodCamp : public ResourceBuilding
{
private:
    /* data */
public:
    WoodCamp(/* args */);
    ~WoodCamp();
};

WoodCamp::WoodCamp(/* args */)
{
    m_Type = ResourceType::WOOD;
    m_IncomeAmount = 10;
    m_IncomeMult = 1;
    m_UpgradeCost[ResourceType::WOOD] = 100;
    m_UpgradeCost[ResourceType::STONE] = 500;
    m_Name = "Wood Camp";

    Info();
}

WoodCamp::~WoodCamp()
{
}

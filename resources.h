#pragma once

#include <vector>
#include <string>

// Base class
class Resource
{
public:
    Resource(int amount);
    ~Resource();

    // Properties ##########################################################

    std::string GetName() { return m_Name; }
    void SetName(const std::string &name) { m_Name = name; }

    int GetAmount() { return m_Amount; }
    void SetAmount(int amount) { m_Amount = amount; }
    // Properties ##########################################################

private:
    std::string m_Name;
    // Amount defines the contribution of this resource to the stockpile.
    //  Can be positive or negative
    //  e.g. resource buildings -> positive, expenditure -> negative
    int m_Amount;
};

Resource::Resource(int amount)
{
    SetAmount(amount);
}

Resource::~Resource()
{
}

class WoodResource : public Resource
{
private:
    /* data */
public:
    WoodResource(int amount);
    ~WoodResource();
};

WoodResource::WoodResource(int amount) : Resource(amount)
{
}

WoodResource::~WoodResource()
{
}

class FoodResource : public Resource
{
private:
    /* data */
public:
    FoodResource(int amount);
    ~FoodResource();
};

FoodResource::FoodResource(int amount) : Resource(amount)
{
}

FoodResource::~FoodResource()
{
}

class GoldResource : public Resource
{
private:
    /* data */
public:
    GoldResource(int amount);
    ~GoldResource();
};

GoldResource::GoldResource(int amount) : Resource(amount)
{
}

GoldResource::~GoldResource()
{
}

class StoneResource : public Resource
{
private:
    /* data */
public:
    StoneResource(int amount);
    ~StoneResource();
};

StoneResource::StoneResource(int amount) : Resource(amount)
{
}

StoneResource::~StoneResource()
{
}

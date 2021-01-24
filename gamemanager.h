#pragma once

#include <map>

#include "gui/gui.h"
#include "colony.h"
#include "buildings.h"

// TODO: Pages should link to each other
struct MenuTree
{
};

// Holds all menu contents
struct MenuHandler
{
    std::map<std::string, FullMenuPage> menus;

    // Construct all static game content here
    void BuildMenus()
    {
        // MAIN MENU
        FullMenuPage mp(std::string("COLONIA"), std::string("v0.1"));
        MenuItem m1 = MenuItem("Start");
        MenuItem m2 = MenuItem("Exit");
        m2.func = [] { exit(0); };
        mp.menu.AddItem(m1);
        mp.menu.AddItem(m2);

        menus["mainmenu"] = mp;
    }

    int ShowMenu(std::string menuKey)
    {
        return menus[menuKey].Show();
    }
};

class GameManager
{
private:
    MenuHandler m_MenuHandler;

public:
    GameManager(/* args */);
    ~GameManager();
};

GameManager::GameManager(/* args */)
{
    m_MenuHandler.BuildMenus();
    int choice = m_MenuHandler.ShowMenu("mainmenu");
    if (choice == 1)
    {
        Colony colony;

        WoodCamp wc = WoodCamp();
        colony.BuildBuilding(wc);
        wc.Enter();
    }
    else
    {
        exit(0);
    }
}

GameManager::~GameManager()
{
}

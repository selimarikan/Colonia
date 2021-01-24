#pragma once

#include <cstdlib>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

#include "gui_defs.h"
#include "menu.h"

// Defines the text-based "G"UI

// Read any type of response from the user
template <typename T>
T Read()
{
    T answer;
    std::cin >> answer;
    return answer;
}

// A UI Page is defined as 30 lines and 120 characters in width
struct Page
{
    size_t width = 120;
    size_t height = 30;

    std::string title;
    std::string description;
    std::string top = std::string(width, '#') + "\n";
    std::string mid = std::string(2, '#') + "\n";
    std::string bottom = std::string(width, '#') + "\n";
};

// A Page contains a menu that shows all of the options that can be done there
struct FullMenuPage : Page
{
    Menu menu;
    FullMenuPage() {}
    FullMenuPage(std::string titleText, std::string descrText)
    {
        title = titleText;
        description = descrText;
    }

    int Show() const
    {
        std::cout << top;
        std::cout << title << "\n";
        std::cout << description << "\n";
        std::cout << bottom;

        // Fill the empty rows
        // for (size_t i = 0; i < height - menu.items.size() ; i++)
        // {
        //     std::cout << mid;
        // }

        // Show each item in the menu
        menu.Show();

        std::cout << ":: ";

        int response = Read<int>();
        return response;
    }
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
        mp.menu.AddItem(m1);
        mp.menu.AddItem(m2);

        menus["mainmenu"] = mp;
    }

    int ShowMenu(std::string menuKey)
    {
        CLS();
        return menus[menuKey].Show();
    }
};

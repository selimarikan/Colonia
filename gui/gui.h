#pragma once

#include <cstdlib>
#include <iostream>

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
        CLS();
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

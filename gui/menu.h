#pragma once

#include <functional>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "gui_defs.h"

// A MenuItem defines an option in a menu with an integer index and string content
struct MenuItem
{
    std::string text;
    int index;
    // A custom functionality / callback can be implemented using the 'func'
    std::function<void()> func;

    MenuItem(std::string t)
    {
        text = t;
    }
    std::string Get() const
    {
        std::stringstream ss;
        // TODO: Optimize later -> Knuth
        ss << DEFPAD << DEFLB << index << "] " << text << NEWL;
        return ss.str();
    }
    void Run() const
    {
        func();
    }
};

// A Menu contains multiple MenuItem(s) to organize a menu.
//  Menu itself can be used for store views, combat views etc.
struct Menu
{
    std::vector<MenuItem> items;

    size_t GetHeight()
    {
        return items.size();
    }

    void AddItem(MenuItem &item)
    {
        // Index starts with 1
        item.index = items.size() + 1;
        items.emplace_back(item);
    }

    void Show() const
    {
        // Print all menu items
        for (const auto &item : items)
        {
            std::cout << item.Get();
        }
    }
};

#pragma once

#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#ifdef _WIN32
#define CLS() std::system("cls");
#else
#define CLS() std::system("clear");
#endif

#define PAD0 ""
#define PAD1 "#"
#define PAD2 "##"
#define PAD3 "###"
#define PAD4 "####"
#define PAD5 "#####"
#define PAD6 "######"
#define PAD7 "#######"
#define DEFPAD PAD7
#define DEFLB "> "
#define PADLINE "################################################################################\n"
#define SPCE ""
#define NEWL "\n"

// Defines the text-based "G"UI

// Read any type of response from the user
template <typename T>
T Read()
{
    T answer;
    std::cin >> answer;
    return answer;
}

struct MenuItem
{
    std::string text;
    int index;

    std::string Get() const
    {
        std::stringstream ss;
        // TODO: Optimize later -> Knuth
        ss << DEFPAD << DEFLB << index << "] " << text << NEWL;
        return ss.str();
    }
};

struct Menu
{
    std::vector<MenuItem> items;

    size_t GetHeight()
    {
        return items.size();
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

// A UI Page is defined as 30 lines and 120 characters in width
struct Page
{
    size_t width = 120;
    size_t height = 30;

    std::string top = std::string(width, '#');
    std::string bottom = std::string(width, '#');
};

struct FullMenuPage : Page
{
    int Show() const
    {
        // TODO: Continue:  Design the menu page
        std::cout << top;

        std::cout << std::endl;

        int response = Read<int>();
        return response;
    }
};

void ShowIntro()
{
    CLS();
    std::cout << PADLINE;
    std::cout << PAD7 << " COLONIA" << NEWL;
    std::cout << PAD7 << " v0.1" << NEWL;
    std::cout << PADLINE;
    std::cout << PAD7 << " 1- Start" << NEWL;
    std::cout << PAD7 << " 2- Exit" << NEWL;
    std::cout << PADLINE;
}

void ShowMainMenu()
{
}

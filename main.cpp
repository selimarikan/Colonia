// Colonia - The colony building game
// ==================================
// Buildings to gather resources
// People should be assigned to the buildings for gathering
// No combat for now, it is mostly survival
// You cannot produce people, they will join the colony if they like it

#include <iostream>

#include "colony.h"

int main()
{
    int choice = 0;

    std::cout << "####### ####### ####### #######\n";
    std::cout << "#######  C O L O N I A  #######\n";
    std::cout << "#######       v0.1      #######\n";
    std::cout << "####### ####### ####### #######\n";
    std::cout << "#######  1- Start       #######\n";
    std::cout << "#######  2- Exit        #######\n";

    if (choice == 1)
    {
        Colony colony;
    }
    else
    {
        exit(0);
    }

    return 0;
}
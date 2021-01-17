#pragma once

#include <cstdlib>
#include <iostream>

#ifdef _WIN32
#define CLS() std::system("cls");
#else
#define CLS() std::system("clear");
#endif

// Defines the text-based "G"UI

void ShowIntro()
{
    CLS();
    std::cout << "####### ####### ####### #######\n";
    std::cout << "#######  C O L O N I A  #######\n";
    std::cout << "#######       v0.1      #######\n";
    std::cout << "####### ####### ####### #######\n";
    std::cout << "#######  1- Start       #######\n";
    std::cout << "#######  2- Exit        #######\n";
    std::cout << "####### ####### ####### #######\n";
}

template <typename T>
T Read()
{
    T answer;
    std::cin >> answer;
    return answer;
}
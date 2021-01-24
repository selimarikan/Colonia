#pragma once

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
#include "gui.h"
#include "colony.h"

int main()
{
    ShowIntro();
    int choice = Read<int>();

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
#include "gui.h"
#include "colony.h"
#include "buildings.h"

int main()
{
    ShowIntro();
    int choice = Read<int>();

    if (choice == 1)
    {
        Colony colony;

        WoodCamp wc = WoodCamp();
        colony.BuildBuilding(wc);
    }
    else
    {
        exit(0);
    }

    return 0;
}
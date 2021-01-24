#include "gui/gui.h"
#include "colony.h"
#include "buildings.h"

int main()
{
    MenuHandler mh;
    mh.BuildMenus();

    int choice = mh.ShowMenu("mainmenu");
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
#include "level.h"

namespace race
{

Level::Level():level_number_(0)
{
}

int Level::set()
{
    cin>>level_number_;
    system("cls");
    return level_number_;
}
}

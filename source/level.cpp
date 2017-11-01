#include "level.h"

namespace race
{

void Level::set()
{
    cin>>level_;
    system("cls");
    GameField::conditions(level_);
}

}




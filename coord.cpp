#include "coord.h"


namespace race
{

void Coord::setXY(int x, int y)
{

    coord_.X = x;
    coord_.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord_);
}

}

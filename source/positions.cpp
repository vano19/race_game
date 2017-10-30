#include "positions.h"


namespace race
{

void Positions::setXY(int x, int y)
{
    
    coord_.X = x;
    coord_.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord_);
}

}


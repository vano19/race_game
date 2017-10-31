#ifndef MENU_H
#define MENU_H

#include "positions.h"

namespace race
{

class Menu
{
public:
    void howToPlay();
    void indicators(const int times, const int speed,const double distances);
    void gameOvere();
    Positions getObjectPositions() const;
private:
    Positions positions;
};
}
#endif // MENU_H

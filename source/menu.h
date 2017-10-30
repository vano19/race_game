#ifndef MENU_H
#define MENU_H

#include "positions.h"

namespace race
{

class Menu
{
public:
    void howToPlay();
    void indicators(int times, int speed, double distances);
    void gameOvere();
    Positions getObjectPositions() const;
private:
    Positions positions;
};
}
#endif // MENU_H

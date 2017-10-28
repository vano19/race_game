#ifndef MENU_H
#define MENU_H


#include "coord.h"'

namespace race
{

class Menu : public Coord
{
    Menu(const Menu& menu);
    Menu& operator =(const Menu& menu);
public:
    void howToPlay();
    void indicators(int times, int speed, double distances);
    void gameOvere();
};
}
#endif // MENU_H

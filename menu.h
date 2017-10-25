#ifndef MENU_H
#define MENU_H


#include "coord.h"'

namespace race
{

class Menu : public Coord
{
public:
    void howToPlay();
    void indicators(int times, int speed, double distances);
    void gameOvere();
};
}
#endif // MENU_H

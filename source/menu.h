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
    void outLevel();
    void outPause();
    void expectation();
    Positions getObjectPositions() const;
    Menu();
    Menu& operator =(const Menu& menu) = delete;
    Menu(const Menu& menu) = delete;
private:
    unique_ptr<Positions> positions_;
};
}
#endif // MENU_H


#ifndef COORD_H
#define COORD_H

#include "raceHelper.h"


namespace race
{

class Positions
{
public:
    void setXY(int x, int y);
    ~Positions() = default;
private:
    COORD coord_;
};
}
#endif // COORD_H


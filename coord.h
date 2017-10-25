#ifndef COORD_H
#define COORD_H

#include "race.h"

namespace race
{

class Coord
{
    COORD coord_;
public:
    void setXY(int x, int y);
    ~Coord() = default;
};
}
#endif // COORD_H

#ifndef COORD_H
#define COORD_H

#include "raceHelper.h"


namespace race
{

class Positions
{
public:
    void setXY(const int x,const int y);
    Positions() = default;
    ~Positions() = default;
    Positions& operator =(const Positions& positions) = delete;
    Positions(const Positions& positions) = delete;
    Positions( Positions&& positions) = default;
private:
    COORD coord_;
};
}
#endif // COORD_H


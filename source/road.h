#ifndef ROAD_H
#define ROAD_H

#include "menu.h"

namespace race
{

class Road
{
public:
    Road();
    int     getPoint() const;
    double  getDistances() const;
    void    setDistances(const double distances);
    void    setPoint(const int point);
private:
    int     point_;
    double  distances_;
};
}
#endif // ROAD_H

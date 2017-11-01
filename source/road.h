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
    void operator ++();
    Road& operator =(const Road& road) = delete;
    Road(const Road& road) = delete;
    Road(Road &&road) = default;
private:
    int     point_;
    double  distances_;
};
}
#endif // ROAD_H

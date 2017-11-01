#include "road.h"
namespace race
{

Road::Road():point_(0),distances_(0.0)
{
}

double Road::getDistances() const
{
    return distances_;
}

void Road::setDistances(const double distances)
{
    distances_ = distances;
}

void Road::setPoint(const int point)
{
    point_ = point;
}

void Road::operator ++()
{
    ++point_;
}

int Road::getPoint() const
{
    return point_;
}
}

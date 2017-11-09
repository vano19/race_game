#ifndef LEVEL_H
#define LEVEL_H


#include "delay.h"

namespace race
{

class Level
{
public:
    Level();
    ~Level() = default;
    int set();
    Level& operator =(const Level& level) = delete;
    Level(const Level& level) = delete;
    Level(Level &&level) = default;
private:
    int level_number_;
};
}
#endif // LEVEL_H

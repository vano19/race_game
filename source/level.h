#ifndef LEVEL_H
#define LEVEL_H


#include "game_field.h"

namespace race
{

class Level: public GameField
{
public:
    ~Level() = default;
    void set();
private:
    int level_;
};
}
#endif // LEVEL_H

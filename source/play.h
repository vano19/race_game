#ifndef INSPECTION_H
#define INSPECTION_H

#include "game_field.h"
#include "matrix.h"

namespace race
{

class Play final: public GameField,
                  public Matrix
{
public:
    Play();
    void start();
    Play(const Play& play) = delete;
    Play& operator =(const Play& play) = delete;
    virtual ~Play() = default;
private:
    bool isDone_;
};
}
#endif // INSPECTION_H

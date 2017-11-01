#ifndef INSPECTION_H
#define INSPECTION_H

#include "level.h"
#include "matrix.h"

namespace race
{

class Play final: public Level,
                  public Matrix
{
public:
    Play();
    void start();
    Play(const Play& play) = delete;
    Play& operator =(const Play& play) = delete;
private:
    bool isDone_;
};
}
#endif // INSPECTION_H

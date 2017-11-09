#ifndef DELAY_H
#define DELAY_H

#include "car.h"

namespace race
{

class Delay
{
public:
    Delay();
    void        setAverage();
    void        setDiffcult();
    void        setTime(const int times);
    inline void set(const int delay);
    int         get() const;
    int         getTime() const;
    void operator ++();
    void operator --();
    Delay& operator =(const Delay& delay) = delete;
    Delay(const Delay& delay) = delete;
    Delay(Delay &&delay) = default;
private:
    int     delay_;
    int     times_;
};
}
#endif // DELAY_H


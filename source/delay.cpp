#include "delay.h"

namespace race
{

Delay::Delay():delay_(MAX_SPEED - 1),times_(0)
{
}

void Delay::setAverage()
{
    delay_ = AVERAGE_SPEED;
}

void Delay::setDiffcult()
{
    delay_ = DIFFCULT_SPEED;
}
int Delay::get() const
{
    return delay_;
}

void Delay::operator ++()
{
    ++delay_;
}

void Delay::operator --()
{
   --delay_;
}

int Delay::getTime() const
{
    return times_;
}

void Delay::setTime(const int times)
{
    times_ = times;
}

void Delay::set(const int delay)
{
    delay_ = delay;
}
}

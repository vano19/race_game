#include "car.h"
namespace race
{

Car::Car()
{
    myPosition_ = 0;
    position_ = 0;
    speed_ = 0;
    point_ = 0;
}

int Car::getMyPosition() const
{
    return myPosition_;
}

bool Car::hasCollition()
{
    if((point_ >= (HEIGHT - LEN_CAR)) && (getMyPosition() == getPosition()))
        return true;
    return false;
}

int Car::getSpeed() const
{
    return speed_;
}

int Car::getPosition() const
{
    return position_;
}

void Car::setMyPosition(const int position)
{
    myPosition_ = position;
}

void Car::setPosition(const int position)
{
    position_ = position;
}

void race::Car::setSpeed(const int speed)
{
    speed_ = speed;
}

void Car::setPoint(const int point)
{
    point_ = point;
}
}

#include "car.h"
namespace race
{

Car::Car():position_(0),myPosition_(0),speed_(0),point_(0)
{
}

int Car::getMyPosition() const
{
    return myPosition_;
}

bool Car::hasCollition() const
{
    bool isCollition = false;
    if((point_ >= (HEIGHT - LEN_CAR)) && (getMyPosition() == getPosition()))
        isCollition = true;
    return isCollition;
}

void Car::operator ++()
{
    ++speed_;
}

void Car::operator --()
{
    --speed_;
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


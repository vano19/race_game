#include "control.h"

namespace race
{

void Control::controKeyboardl()
{
    while (keyboard_)
    {
        input_ = getch();
        switch (input_)
        {
        case LEFT:
            car_.setMyPosition(LEFT_POSITION);
            break;
        case RIGHT:
            car_.setMyPosition(RIGHT_POSITION);
            break;
        case GAS:
            if(delay_ < MAX_SPEED)
            {
                --delay_;
                car_.setSpeed(car_.getSpeed() + 1);
            }
            break;
        case STOP:
            if(car_.getSpeed() > MIN_SPEED)
            {
                ++delay_;
                car_.setSpeed(car_.getSpeed() - 1);
            }
            break;
        case ENTER:
            getObjectPositions().setXY(INDICATORS_POSITION_X,POSITIONS_Y -  1);
            cout<<"PAUSE  "<<endl;
            pause_ = true;
            break;
        case ESC:
            gameOvere();
            whileBool_ = false;
            keyboard_ = false;
            break;
        }
    }
    
    
}



int Control::endPause()
{
    input_ = getch();
    if(input_ == ENTER)
        pause_ = false;
    else if(input_ == ESC)
    {
        gameOvere();
        return 0;
    }
    return 1;
}

bool Control::isEndControl() const
{
    return whileBool_;
}

bool Control::hasPause() const
{
    return pause_;
}

int Control::getTime() const
{
    return times_;
}

Car Control::getObjectCar() const
{
    return this->car_;
}

Road Control::getObjectRoad() const
{
    return road_;
}

void Control::activateKeyboard(const bool keyboard)
{
    keyboard_ = keyboard;
}

int Control::getRandom()
{
    int n;
    if((rand() % POSITIONS_MY_CAR) == 0)
        n = LEFT_POSITION;
    else n = RIGHT_POSITION;
    return n;
}

Control::Control()
{
    whileBool_ = true;
    pause_ = false;
    keyboard_ = true;
    input_ = 0;
    delay_ = MAX_SPEED - 1;
    times_ = 0;
    
}
void Control::limitSpeed()
{
    if((times_ % (WIEGHT - 1) == 0 ) && (road_.getPoint() == (HEIGHT - 1) || road_.getPoint() == -1))
    {
        car_.setSpeed(car_.getSpeed() + 1);
        delay_--;
    }
    Sleep(delay_);
}

void Control::swapPoint()
{
    car_.setPoint(road_.getPoint());
}
void Control::createNewCar()
{
    road_.setPoint(road_.getPoint() + 1);
    if(road_.getPoint() == (HEIGHT - 1))
    {
        road_.setPoint(-1);
        car_.setPosition(getRandom());
        times_++;
        road_.setDistances(road_.getDistances() + (car_.getSpeed()*times_)/METER_IN_KM);
    }
}

}

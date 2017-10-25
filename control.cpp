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
            myPosition_ = LEFT_POSITION;
            break;
        case RIGHT:
            myPosition_ = RIGHT_POSITION;
            break;
        case GAS:
            if(delay_ < MAX_SPEED)
            {
                --delay_;
                speed_++;
            }
            break;
        case STOP:
            if(speed_ > MIN_SPEED)
            {
                ++delay_;
                speed_--;
            }
            break;
        case ENTER:
            setXY(14,4);
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

void Control::limitSpeed()
{
    if((times_ % (WIEGHT - 1) == 0 ) && (positionRoad_ == (HEIGHT - 1) || positionRoad_ == -1))
    {
        speed_++;
        delay_--;
    }
    Sleep(delay_);
}

bool Control::isEndControl() const
{
    return whileBool_;
}

bool Control::hasPause() const
{
    return pause_;
}

int Control::getMyPosition()
{
    return myPosition_;
}

int Control::getPositionCar() const
{
    return positionCar_;
}


int Control::getTime() const
{
    return times_;
}

int Control::getSpeed() const
{
    return speed_;
}

double Control::getDistances() const
{
    return distances_;
}

int Control::getPositionRoad() const
{
    return positionRoad_;
}

void Control::createNewCar()
{
    positionRoad_++;
    if(positionRoad_ == (HEIGHT - 1))
    {
        positionRoad_ = - 1;
        positionCar_ = getRandom();
        times_++;
        distances_ += (speed_*times_)/METER_IN_KM;
    }
}

bool Control::hasCollition()
{
    if((positionRoad_ >= (HEIGHT - LEN_CAR)) && (myPosition_ == positionCar_))
        return true;
    return false;
}

void Control::activateKeyboard(bool keyboard)
{
    keyboard_ = keyboard;
}

int Control::getRandom()
{
    int n;
    if(rand()%2 == 0)
        n = LEFT_POSITION;
    else n = RIGHT_POSITION;
    return n;
}

Control::Control()
{
    whileBool_ = true;
    pause_ = false;
    keyboard_ = true;
    input_;
    delay_ = MAX_SPEED - 1;
    myPosition_ = 0;
    positionCar_ = 0;
    positionRoad_ = 0;
    times_ = 0;
    speed_ = 0;
    distances_ = 0.0;
}
}

#include "game_field.h"

namespace race
{

Car GameField::objectCar() const
{
    return move(*car_);
}

Road GameField::objectRoad() const
{
    return move(*road_);
}

Delay GameField::objectDelay() const
{
    return move(*delay_);
}

void GameField::limitSpeed()
{
    if((delay_->getTime() % (WIEGHT - 1) == 0 ) && (road_->getPoint() == (HEIGHT - 1)
                                                    || road_->getPoint() == -1))
    {
        ++(*car_);
        --(*delay_);
    }
    Sleep(delay_->get());
}
void GameField::createNewCar()
{
    ++(*road_);
    if(road_->getPoint() == (HEIGHT - 1))
    {
        road_->setPoint(-1);
        car_->setPosition(getRandom());
        delay_->setTime(delay_->getTime() + 1);
        road_->setDistances(road_->getDistances() + (car_->getSpeed()*delay_->getTime())/METER_IN_KM);
    }
}
GameField::GameField():car_(new Car), road_(new Road), delay_(new Delay),
    whileBool_(true),pause_(false),keyboard_(true),input_(0)
{
}

void GameField::controKeyboardl()
{
    while (keyboard_)
    {
        input_ = getch();
        switch (input_)
        {
        case LEFT:
            car_->setMyPosition(LEFT_POSITION);
            break;
        case RIGHT:
            car_->setMyPosition(RIGHT_POSITION);
            break;
        case GAS:
            if(delay_->get() < MAX_SPEED)
            {
                --(*delay_);
                ++(*car_);
            }
            break;
        case STOP:
            if(delay_->get() > MIN_SPEED)
            {
                ++(*delay_);
                --(*car_);
            }
            break;
        case ENTER:
            pause_ = true;
            break;
        case ESC:
            whileBool_ = false;
            keyboard_ = false;
            break;
        }
    }
}

void GameField::conditions(const int level)
{   switch (level) {
    case LEVEL2:
        delay_->setAverage();
        break;
    case LEVEL3:
        delay_->setDiffcult();
        break;
    default:
        break;
    }
}

bool GameField::isEndControl() const
{
    return whileBool_;
}

bool GameField::hasPause() const
{
    return pause_;
}

void GameField::activateKeyboard(const bool keyboard)
{
    keyboard_ = keyboard;
}

int GameField::endPause()
{
    input_ = getch();
    if(input_ == ENTER)
        pause_ = false;
    else if(input_ == ESC)
    {
        return 0;
    }
    return 1;
}

GameField::~GameField()
{
    car_.get_deleter();
    road_.get_deleter();
    delay_.get_deleter();
}

int GameField::getRandom()
{
    int n;
    if((rand() % POSITIONS_MY_CAR) == 0)
        n = LEFT_POSITION;
    else n = RIGHT_POSITION;
    return n;
}

void GameField::swapPoint()
{
    car_->setPoint(road_->getPoint());
}

}

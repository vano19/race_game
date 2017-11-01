#ifndef CONTROL_H
#define CONTROL_H


#include "delay.h"


namespace race
{

class GameField
{
public:
    GameField();
    ~GameField();
    int     getRandom();
    int     endPause();
    void    controKeyboardl();
    void    conditions(const int level);
    void    limitSpeed();
    void    swapPoint();
    void    createNewCar();
    void    activateKeyboard(const bool keyboard);
    bool    isEndControl() const;
    bool    hasPause() const;
    Car objectCar() const;
    Road objectRoad() const;
    Delay objectDelay() const;
    GameField(const GameField & gameField) = delete;
    GameField& operator =(const GameField& gameField) = delete;
private:
    bool    whileBool_;
    bool    pause_;
    bool    keyboard_;
    int     input_;
    unique_ptr<Car> car_;
    unique_ptr<Road> road_;
    unique_ptr<Delay> delay_;
};
}

#endif // CONTROL_H

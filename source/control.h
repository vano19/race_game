#ifndef CONTROL_H
#define CONTROL_H


#include "car.h"
#include "road.h"

namespace race
{

class Control : public Menu
{
public:
    Control();
    ~Control() = default;
    int     endPause();
    int     getTime() const;
    void    limitSpeed();
    void    swapPoint();
    void    controKeyboardl();
    void    activateKeyboard(bool keyboard);
    void    createNewCar();
    bool    isEndControl() const;
    bool    hasPause() const;
    Car getObjectCar() const;
    Road getObjectRoad() const;
private:
    Car car_;
    Road road_;
    bool    whileBool_;
    bool    pause_;
    bool    keyboard_;
    int     input_;
    int     delay_;
    int     times_;
    int     getRandom();
    Control(const Control & control);
    Control& operator =(const Control& control);
    
};
}

#endif // CONTROL_H


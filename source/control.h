#ifndef CONTROL_H
#define CONTROL_H


#include "menu.h"

namespace race
{

class Control : public Menu
{
    bool    whileBool_;
    bool    pause_;
    bool    keyboard_;
    int     input_;
    int     delay_;
    int     myPosition_;
    int     positionCar_;
    int     positionRoad_;
    int     times_;
    int     speed_;
    double  distances_;
    int     getRandom();
    Control(const Control & control);
    Control& operator =(const Control& control);
public:
    Control();
    ~Control() = default;
    void    controKeyboardl();
    int     endPause();
    void    limitSpeed();
    bool    isEndControl() const;
    bool    hasPause() const;
    int     getMyPosition();
    int     getPositionCar() const;
    int     getTime() const;
    int     getSpeed() const;
    double  getDistances() const;
    int     getPositionRoad() const;
    void    createNewCar();
    bool    hasCollition();
    void    activateKeyboard(bool keyboard);


};
}

#endif // CONTROL_H

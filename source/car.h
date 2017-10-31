#ifndef CAR_H
#define CAR_H





#include "road.h"


namespace race
{

class Car
{
public:
    Car();
    ~Car() = default;
    void    setMyPosition(const int position);
    void    setPosition(const int position);
    void    setSpeed(const int speed );
    void    setPoint(const int point);
    int     getSpeed() const;
    int     getMyPosition() const;
    int     getPosition() const;
    bool    hasCollition() const;
private:
    int     position_;
    int     myPosition_;
    int     speed_;
    int     point_;

};
}

#endif // CAR_H

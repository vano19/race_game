#include "play.h"

namespace race
{

Play::Play():isDone_(true)
{
}

void Play::start()
{

    howToPlay();
    expectation();
    outLevel();
    set();
    expectation();
    while(isDone_)
    {
        indicators(objectDelay().getTime(),objectCar().getSpeed(),objectRoad().getDistances());
        reset();
        drawCoord(objectCar().getPosition(),objectRoad().getPoint());
        drawCoord(objectCar().getMyPosition(),race::HEIGHT-race::LEN_CAR);
        setBorder();
        createNewCar();
        limitSpeed();
        swapPoint();
        if(objectCar().hasCollition())
        {
            gameOvere();
            isDone_ = false;
            activateKeyboard(false);
        }
        while(hasPause())
        {
            outPause();
            if (!endPause())
            {
                gameOvere();
                isDone_ = false;
            }
        }

        if(!isEndControl())
        {
            gameOvere();
            isDone_ = false;
        }
    }
}


}

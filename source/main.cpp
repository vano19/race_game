#include "matrix.h"

int main(int argc, char *argv[])
{
    race::Menu menu;
    menu.howToPlay();
    race::Control control;
    thread Thread(&race::Control::controKeyboardl, &control);
    race::Matrix matrix;
    bool isDone = true;
    while(isDone)
    {
        menu.indicators(control.getTime(),control.getObjectCar().getSpeed(),control.getObjectRoad().getDistances());
        matrix.reset();
        matrix.drawCoord(control.getObjectCar().getPosition(),control.getObjectRoad().getPoint());
        matrix.drawCoord(control.getObjectCar().getMyPosition(),race::HEIGHT-race::LEN_CAR);
        matrix.setBorder();
        control.createNewCar();
        control.limitSpeed();
        control.swapPoint();
        if(control.getObjectCar().hasCollition())
        {
            menu.gameOvere();
            isDone = false;
            control.activateKeyboard(false);
        }
        while(control.hasPause())
        {
            if (!control.endPause())
                isDone = false;
        }
        
        if(!control.isEndControl())
            isDone = false;
    }
    Thread.join();
    return 0;
}

#include "menu.h"

namespace  race
{

void Menu::howToPlay()
{
    positions.setXY(POSITIONS_X,POSITIONS_Y - 3);
    cout<<"CONTROLS";
    positions.setXY(POSITIONS_X,POSITIONS_Y - 2);
    cout<<"========";
    positions.setXY(POSITIONS_X,POSITIONS_Y - 1);
    cout<<"["<<char(ARROW_LEFT)<<"]=LEFT";
    positions.setXY(POSITIONS_X,POSITIONS_Y);
    cout<<"["<<char(ARROW_RIGHT)<<"]=RIGHT";
    positions.setXY(POSITIONS_X,POSITIONS_Y + 1);
    cout<<"["<<char(SLASH)<<char(BACKSLASH)<<"]=GAS";
    positions.setXY(POSITIONS_X,POSITIONS_Y + 2);
    cout<<"["<<char(BACKSLASH)<<char(SLASH)<<"]=STOP";
    
    
    for (int i = WIEGHT - 1; i >= 0; i--)
    {
        positions.setXY(POSITIONS_X,POSITIONS_Y + 4);
        cout<<i;
        Sleep(WAIT);
    }
    system("cls");
}

void Menu::indicators(int times, int speed, double distances)
{
    positions.setXY(INDICATORS_POSITION_X,POSITIONS_Y - 1);
    cout<<"TIME:"<<times;
    positions.setXY(INDICATORS_POSITION_X,POSITIONS_Y);
    cout<<"SPEED:"<<speed;
    positions.setXY(INDICATORS_POSITION_X,POSITIONS_Y + 1);
    cout<<"DISTANCE:"<<distances;
}
void Menu::gameOvere()
{
    positions.setXY(INDICATORS_POSITION_X,POSITIONS_Y - 1);
    cout<<"GAME OVER"<<endl;
}

Positions Menu::getObjectPositions() const
{
    this->positions;
}
}

#include "menu.h"

namespace  race
{

void Menu::howToPlay()
{
    positions_->setXY(POSITIONS_X,POSITIONS_Y - 3);
    cout<<"CONTROLS";
    positions_->setXY(POSITIONS_X,POSITIONS_Y - 2);
    cout<<"========";
    positions_->setXY(POSITIONS_X,POSITIONS_Y - 1);
    cout<<"["<<char(ARROW_LEFT)<<"]=LEFT";
    positions_->setXY(POSITIONS_X,POSITIONS_Y);
    cout<<"["<<char(ARROW_RIGHT)<<"]=RIGHT";
    positions_->setXY(POSITIONS_X,POSITIONS_Y + 1);
    cout<<"["<<char(SLASH)<<char(BACKSLASH)<<"]=GAS";
    positions_->setXY(POSITIONS_X,POSITIONS_Y + 2);
    cout<<"["<<char(BACKSLASH)<<char(SLASH)<<"]=STOP";
    
}

void Menu::indicators(const int times,const int speed,const double distances)
{
    positions_->setXY(INDICATORS_POSITION_X,POSITIONS_Y - 1);
    cout<<"TIME:"<<times;
    positions_->setXY(INDICATORS_POSITION_X,POSITIONS_Y);
    cout<<"SPEED:"<<speed;
    positions_->setXY(INDICATORS_POSITION_X,POSITIONS_Y + 1);
    cout<<"DISTANCE:"<<distances;
}
void Menu::gameOvere()
{
    positions_->setXY(INDICATORS_POSITION_X,POSITIONS_Y - 1);
    cout<<"GAME OVER"<<endl;
}
void Menu::outLevel()
{
    positions_->setXY(POSITIONS_X,POSITIONS_Y - 3);
    cout<<"LEVEL";
    positions_->setXY(POSITIONS_X,POSITIONS_Y - 2);
    cout<<"========";
    positions_->setXY(POSITIONS_X,POSITIONS_Y - 1);
    cout<<"LEVEL [EASY] = 1 ";
    positions_->setXY(POSITIONS_X,POSITIONS_Y);
    cout<<"LEVEL [AVERAGE] = 2";
    positions_->setXY(POSITIONS_X,POSITIONS_Y + 1);
    cout<<"LEVEL [DIFFCULT] = 3";
    positions_->setXY(POSITIONS_X,POSITIONS_Y + 2);
    cout<<"LEVEL : ";
    
}

void Menu::outPause()
{
    getObjectPositions().setXY(INDICATORS_POSITION_X,POSITIONS_Y -  1);
    cout<<"PAUSE  "<<endl;
}
void Menu::expectation()
{
    for (int i = WIEGHT - 1; i >= 0; i--)
    {
        positions_->setXY(POSITIONS_X,POSITIONS_Y + 4);
        cout<<i;
        Sleep(WAIT);
    }
    system("cls");
}

Positions Menu::getObjectPositions() const
{
    return move(*positions_);
}

Menu::Menu(): positions_(new Positions)
{
}
}


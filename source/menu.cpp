#include "menu.h"

namespace  race
{

void Menu::howToPlay()
{
    setXY(7,2);
    cout<<"CONTROLS";
    setXY(7,3);
    cout<<"========";
    setXY(7,4);
    cout<<"["<<char(ARROW_LEFT)<<"]=LEFT";
    setXY(7,5);
    cout<<"["<<char(ARROW_RIGHT)<<"]=RIGHT";
    setXY(7,6);
    cout<<"["<<char(SLASH)<<char(BACKSLASH)<<"]=GAS";
    setXY(7,7);
    cout<<"["<<char(BACKSLASH)<<char(SLASH)<<"]=STOP";


    for (int i = WIEGHT - 1; i >= 0; i--)
    {
        setXY(7,9);
        cout<<i;
        Sleep(WAIT);
    }
    system("cls");
}

void Menu::indicators(int times, int speed, double distances)
{
    setXY(14,4);
    cout<<"TIME:"<<times;
    setXY(14,5);
    cout<<"SPEED:"<<speed;
    setXY(14,6);
    cout<<"DISTANCE:"<<distances;
}
void Menu::gameOvere()
{
    setXY(14,4);
    cout<<"GAME OVER"<<endl;
}
}

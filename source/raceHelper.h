#ifndef RACE_H
#define RACE_H


#include <iostream>
#include <conio.h>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <thread>

using namespace std;

namespace race
{
const double    METER_IN_KM = 1000.0;
const int       HEIGHT = 16;
const int       WIEGHT = 6;
const int       LEFT = 75;
const int       RIGHT = 77;
const int       GAS = 72;
const int       STOP = 80;
const int       ENTER = 13;
const int       ESC = 27;
const int       MAX_SPEED = 91;
const int       LEFT_POSITION = 0;
const int       RIGHT_POSITION = 3;
const int       MIN_SPEED = 0;
const int       LEN_CAR = 4;
const int       INDENT_LEFT = 2;
const int       INDENT_RIGHT = 5;
const int       WAIT = 1000;
const int       ARROW_LEFT = 60;
const int       ARROW_RIGHT = 62;
const int       BACKSLASH = 92;
const int       SLASH = 47;
const int       POSITIONS_X = 7;
const int       POSITIONS_Y = 5;
const int       INDICATORS_POSITION_X = 14;
const int       POSITIONS_MY_CAR = 2;
}

#endif

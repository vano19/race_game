#include "matrix.h"

namespace race
{

Matrix::Matrix()
{
    matrix_ = new int* [WIEGHT];
    for (int i = 0; i < WIEGHT; i++)
        matrix_[i] = new int [HEIGHT];
}

Matrix::~Matrix()
{
    
    for(int i = 0; i < WIEGHT; i++)
        delete [] matrix_[i];
    delete matrix_;
    
}

void Matrix::reset()
{
    for(int j = 0; j < HEIGHT; j++)
        for(int i = 0; i < WIEGHT; i++)
            matrix_[i][j] = 0;
}

void Matrix::drawCoord(const int x,const int y)
{
    drawPoint(POSITIONS_MY_CAR + x - 1, y);
    drawPoint(x, POSITIONS_MY_CAR + y - 1);
    drawPoint(POSITIONS_MY_CAR + x - 1, POSITIONS_MY_CAR + y - 1);
    drawPoint(POSITIONS_MY_CAR + x, POSITIONS_MY_CAR + y - 1);
    drawPoint(POSITIONS_MY_CAR + x - 1, POSITIONS_MY_CAR + y);
    drawPoint(x, POSITIONS_MY_CAR + y + 1);
    drawPoint(POSITIONS_MY_CAR + x - 1, POSITIONS_MY_CAR + y + 1);
    drawPoint(POSITIONS_MY_CAR + x, POSITIONS_MY_CAR + y +1);
}

void Matrix::drawPoint(const int x,const int y)
{
    if((x >= 0 && x < WIEGHT) && (y >= 0 && y < HEIGHT))
        matrix_[x][y] = 1;
}

void Matrix::setBorder()
{
    for(int j = 0; j < HEIGHT; j++)
    {
        getObjectPositions().setXY(WIEGHT - INDENT_LEFT, j + 1);
        cout<<"|";
        getObjectPositions().setXY(WIEGHT - 1, j + 1);
        for(int i = 0; i < WIEGHT; i++)
        {
            if(matrix_[i][j] == 1)
                cout <<"o";
            else
                cout<<" ";
        }
        getObjectPositions().setXY(HEIGHT - INDENT_RIGHT,j+1);
        cout<<"|";
    }
}
}

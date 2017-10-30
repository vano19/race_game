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

void Matrix::drawCoord(int x, int y)
{
    drawPoint(1+x,0+y);
    drawPoint(0+x,1+y);
    drawPoint(1+x,1+y);
    drawPoint(2+x,1+y);
    drawPoint(1+x,2+y);
    drawPoint(0+x,3+y);
    drawPoint(1+x,3+y);
    drawPoint(2+x,3+y);
}

void Matrix::drawPoint(int x, int y)
{
    if((x >= 0 && x < WIEGHT) && (y >= 0 && y < HEIGHT))
        matrix_[x][y] = 1;
}

void Matrix::setBorder()
{
    for(int j = 0; j < HEIGHT; j++)
    {
        setXY(WIEGHT - INDENT_LEFT, j + 1);
        cout<<"|";
        setXY(WIEGHT - 1, j + 1);
        for(int i = 0; i < WIEGHT; i++)
        {
            if(matrix_[i][j] == 1)
                cout <<"o";
            else
                cout<<" ";
        }
        setXY(HEIGHT - INDENT_RIGHT,j+1);
        cout<<"|";
    }
}
}


#ifndef MATRIX_H
#define MATRIX_H

#include "control.h"

namespace race
{

class Matrix : public Control
{
public:
    Matrix();
    ~Matrix();
    void reset();
    void drawCoord(const int x,const int y);
    void drawPoint(const int x,const int y);
    void setBorder();
private:
    int **matrix_;
    Matrix(const Matrix& matrix);
    Matrix& operator =(const Matrix& matrix);
    
};
}
#endif // MATRIX_H

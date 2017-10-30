#ifndef MATRIX_H
#define MATRIX_H


#include "control.h"

namespace race
{

class Matrix : public Control
{   int **matrix_;
    Matrix(const Matrix& matrix);
    Matrix& operator =(const Matrix& matrix);
public:
    Matrix();
    ~Matrix();
    void reset();
    void drawCoord(int x, int y);
    void drawPoint(int x, int y);
    void setBorder();
};
}
#endif // MATRIX_H

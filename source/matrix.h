#ifndef MATRIX_H
#define MATRIX_H

#include "game_field.h"

namespace race
{

class Matrix : public Menu
{
public:
    Matrix();
    virtual ~Matrix() = default ;
    void reset();
    void drawCoord(const int x,const int y);
    void drawPoint(const int x,const int y);
    void setBorder();
    Matrix(const Matrix& matrix) = delete;
    Matrix& operator =(const Matrix& matrix) = delete;
private:
    vector<vector<int>> matrix_;
};
}
#endif // MATRIX_H


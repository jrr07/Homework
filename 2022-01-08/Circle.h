#ifndef CIRCLE_H
#define CIRCLE_H
#include "Figure.h"
class Circle : public Figure{
private:
    int centerX;
    int centerY;
    int radius;

public:
    Circle();
    Circle(int centerX, int centerY, int radius, bool color);
    void setCenterPoint(int centerX, int centerY);
    void setRadius(int radius);
    int getCenterX();
    int getCenterY();
    int getRadius();


};






#endif // CIRCLE_H

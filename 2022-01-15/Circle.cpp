#include "Circle.h"

Circle::Circle(){
    this->centerX = 0;
    this->centerY = 0;
    this->radius = 1;
}

Circle::Circle(int centerX, int centerY, int radius,bool color)
    :Figure(color){
    this->centerX = centerX;
    this->centerY = centerY;
    this->radius = radius;
}

void Circle::setCenterPoint(int centerX, int centerY){
    this->centerX = centerX;
    this->centerY = centerY;
}

void Circle::setRadius(int radius){
    this->radius = radius;
}

int Circle::getCenterX(){
    return this->centerX;
}

int Circle::getCenterY(){
    return this->centerY;
}
int Circle::getRadius(){
    return this->radius;
}
Circle::~Circle(){

}

#include "Line.h"

Line::Line(){
    this->startX=0;
    this ->startY=0;
    this ->endX=0;
    this ->endY=0;
}

Line::Line(int startX, int startY, int endX, int endY, bool color )
    :Figure(color){

    this -> startX = startX;
    this -> startY = startY;
    this -> endX = endX;
    this -> endY = endY;
}
void Line::setStartPoint(int startX, int startY){
    this -> startX = startX;
    this -> startY =startY;
}
void Line:: setEndPoint(int endX, int endY){
    this -> endX = endX;
    this -> endY = endY;
}
int Line::getStartX(){
    return this -> startX;
}
int Line::getStartY(){
    return this -> startY;
}
int Line::getEndX(){
    return this -> endX;
}
int Line::getEndY(){
    return this -> endY;
}

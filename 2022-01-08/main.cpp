#include <QCoreApplication>
#include "Line.h"
#include "Figure.h"
#include <iostream>
#include "Circle.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Line line(0,0,1,1,true);


    cout << "line startX  " <<line.getStartX() << endl;
    cout << "line startY  " <<line.getStartY() << endl;
    cout << "line endX  " <<line.getEndX() << endl;
    cout << "line endY  " <<line.getEndY() << endl;

    cout << "color " <<line.getColor() << endl;

    line.setColor(false);
    cout << "line color " <<line.getColor() << endl;    line.setStartPoint(100,50);
    cout << "line startX  " <<line.getStartX() << endl;
    cout << "line startY  " <<line.getStartY() << endl;

    line.setEndPoint(600,100);
    cout << "line endX  " <<line.getEndX() << endl;
    cout << "line endY  " <<line.getEndY() << endl;

    Circle circle(0,0,1,true);
    cout << "circle x" << circle.getCenterX() << endl;
    cout << "circle y" << circle.getCenterY() << endl;
    cout << "circle radius" << circle.getRadius() << endl;
    cout << "circle color " << circle.getColor() << endl;

    circle.setColor(false);
    cout << "circle color" << circle.getColor() << endl;
    circle.setCenterPoint(1,2);
    circle.setRadius(5);

    cout << "circle x" << circle.getCenterX() << endl;
    cout << "circle y" << circle.getCenterY() << endl;
    cout << "circle radius" << circle.getRadius();

    return 0;
}

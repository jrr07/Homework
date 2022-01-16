#include <QCoreApplication>
#include "Line.h"
#include "Figure.h"
#include <iostream>
#include "Circle.h"

//#include "qlist.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*int *x = nullptr;
    x = new int;
    *x = 10;

    cout << x << endl;
    int y;
    y = 5;
    *x = y + *x;
    cout << y << endl;
    cout << *x;
    delete x;
    x = nullptr;*/
/*
    Line * line = nullptr;
    line = new Line(0, 0, 5, 5, true);
    Circle *circle = nullptr;
    circle = new Circle(0, 0, 10, true);
    line->print();
    delete line;
    line = nullptr;
    delete circle;
    circle = nullptr;
    return 0;*/

    QList<Figure*> list;

    Line line(0,0,1,1,true);

    cout << "line startX  " << line.getStartX() << endl;
    cout << "line startY  " << line.getStartY() << endl;
    cout << "line endX  " << line.getEndX() << endl;
    cout << "line endY  " << line.getEndY() << endl;

    cout << "color " << line.getColor() << endl;

    Line *line2 = new Line(0,0,5,5, false);
    cout << "line2 startX  " << line2->getStartX() << endl;
    cout << "line2 startY  " << line2->getStartY() << endl;
    cout << "line2 endX  " << line2->getEndX() << endl;
    cout << "line2 endY  " << line2->getEndY() << endl;

    Circle *circle2 = new Circle(0,0,5,true);

    delete line2;
    line2 = nullptr;
    delete circle2;
    circle2 = nullptr;

    return 0;



}

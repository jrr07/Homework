#include <QCoreApplication>
#include "Line.h"
#include "Figure.h"
#include <iostream>
#include "Circle.h"


#include "qlist.h"
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int *x = nullptr;
    x = new int;
    *x = 10;

    cout << x << endl;
    int y;
    y = 5;
    *x = y + *x;
    cout << y << endl;
    cout << *x;
    delete x;
    x = nullptr;



    QList<Figure*> list;

    Line *line = new Line(0,0,5,5, true);

    Circle *circle = new Circle(0,0,5,true);














    return 0;
}

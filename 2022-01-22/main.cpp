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


    //2번 숙제 /////////////////////////////////////////////////
    Line * line = nullptr;
    line = new Line(0, 0, 5, 5, true);

    cout << "line startX: " << line->getStartX() << endl;
    cout << "line startY: " << line->getStartY() << endl;
    cout << "line endX: " << line->getEndX() << endl;
    cout << "line endY: " << line->getEndY() << endl;

    cout << "color " << line->getColor() << endl;



    Circle *circle = nullptr;
    circle = new Circle(0, 0, 10, true);

    cout << "circle x: " << circle->getCenterX() << endl;
    cout << "circle y: " << circle->getCenterY() << endl;
    cout << "circle radius: " << circle->getRadius() << endl;
    cout << "circle color: " << circle->getColor() << endl;


    delete line;
    line = nullptr;
    delete circle;
    circle = nullptr;
    // ///////////////////////////////////////////////////////////////



    // 3번 숙제 ///////////////////////////////////////////////////////
    QList<Figure*> list;

    Line * line2 = nullptr;
    line2 = new Line (0,0,5,5,true);

    Circle * circle2 = nullptr;
    circle2 = new Circle (0,0,5,true);

    list.append(line2);

    list.append(circle2);

    for(int i = 0; i < list.count(); i++){
        delete list.at(i);
    }

    list.clear();

    line2 = nullptr;
    circle2 = nullptr;











    // //////////////////////////////////////////////////////////////////

    return 0;



}

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

 //1.3번 반복하면서 Linr, Circle을 하나 하나  생성하고 리스트에 넣는다.//
    QList<Figure*> list;

    for(int i = 0; i < 3; i++){
        Line *line = new Line(0,0,1,1,true);
        Circle *circle = new Circle(0,0,1,true);

        list.append(line);
        list.append(circle);
    }


//2.리스트에서 1번ㅉㅐ에 위치한 도형을 제거한다//


    Figure *figure = list.takeAt(1);
    delete figure;
    figure = nullptr;


//3.리스트 안에 있는 도형 객체 갯수만큼 반복하면서 제거한다//


    for(int i = 0; i < list.count(); i++){
        Figure *figure = list.at(i);
        delete figure;
        figure = nullptr;
    }

    list.clear();




    return 0;



}

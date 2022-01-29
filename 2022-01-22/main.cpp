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
   QList<Figure*>list;

for(int i = 0; i< 3; i++){
    list.append(new Line(55,44,1,1,true));
    list.append(new Circle(22,88,1,true));
}

//2.리스트에서 1번ㅉㅐ에 위치한 도형을 제거한다//

delete list.takeAt(1);



//3.리스트 안에 있는 도형 객체 갯수만큼 반복하면서 제거한다//

    for (int i = 0; i< list.count(); i++){
        Figure *figure = list.at(i);

        figure->whoAreYou();
        if(dynamic_cast<Circle*> (figure)){
            cout << "circle" << endl;
            Circle *circle = dynamic_cast<Circle*>(figure);
            cout << circle->getCenterX() << endl;
            circle->setData(1);

        }
        if(dynamic_cast<Line*>(figure)) {
            cout << "line" << endl;
            Line *line = dynamic_cast<Line*>(figure);
            cout << line ->getStartX() << endl;


        }

        delete figure;
    }

        list.clear();

    return 0;



}

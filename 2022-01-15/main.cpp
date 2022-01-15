#include <QCoreApplication>
#include "Line.h"
#include "Figure.h"
#include <iostream>
#include "Circle.h"
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




    return 0;
}

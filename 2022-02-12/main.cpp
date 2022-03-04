#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    std::cout << "sdsd" << std::endl;
    return 0;
}


bool checkLine (int x, int y, int sx, int sy, int ex, int ey ){
    int a = (ey - sy)*(x - sx) - (ex - sx)*(y - sy);
    if(a == 0) {
        cout << "선 위에 점이 있어요" << endl;
    }
}


bool checkCircle(int x, int y,int cx, int cy, int r){
    int a = (x - cx)*(x - cx) + (y - cy)*(y - cy) - r * r;
    if(a == 0){
        cout << "원 위에 점이 있어요" << endl;
    }
}


bool checkRectnagle(int x, int y,int sx, int sy, int w,int h){
    int a = sx - x;
    int b = sy - y;
    int c = sx - x + w;
    int d = sy - y + h;

    if((a >= sy && a <= y + h) || (b >= sx && b <= x + w) || (c  >= sy && c <= y + h) || (d >= sx && d <= x + w)){
       cout << "직각사각형 위에 점이 있어요" << endl;
    }

}

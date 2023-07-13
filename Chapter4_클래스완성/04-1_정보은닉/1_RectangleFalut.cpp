#include <iostream>
using namespace std;

/* 
1. 제한된 방법으로의 접근만 허용하여 잘못된 값이 저장되지 않도록 해야한다.
2. 실수가 발생하면 실수한 곳의 위치를 쉽게 발견되도록 해야한다.
*/

class Point{
    public:
        int x;      // 0 ~ 100
        int y;      // 0 ~ 100
};

class Rectangle{
    public:
        Point UpLeft;
        Point DonwRight;

    public:
        void showPoint(){
            cout<<"Up Left    : "<<"["<<UpLeft.x << ", "<<UpLeft.y<<"]"<<endl;
            cout<<"Down Right : "<<"["<<DonwRight.x << ", "<<DonwRight.y<<"]"<<endl;
        }
};

int main(){
    Point p1 = {-2, 4};
    Point p2 = {5, 9};

    Rectangle rec = {p1, p2};
    rec.showPoint();
    return 0;
}

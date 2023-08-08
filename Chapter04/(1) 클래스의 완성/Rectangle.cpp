#include "Rectangle.h"
#include <iostream>
using namespace std;

bool Rectangle::InitMember(const Point &p1, const Point &p2){
    if (p1.GetX() > p2.GetX() || p1.GetY() > p2.GetY()){
        cout<<"Miss Point Take"<<endl;
        return false;
    }
    upLeft = p1;
    lowRight = p2;
    return true;
}

// const함수 = 멤버 변수에 전장된 값은 변경하지 않겠다 라는 의미
// const함수 내에서는  const가 아닌 함수의 호출이 제한된다! --> 변경하지 않아도, 가능성이 있는 함수의 호출은 아예 허용하지 않음
void Rectangle::ShowRectangle() const{ 
    cout<<"Up left ["<<upLeft.GetX();
    cout<<", "<<upLeft.GetY()<<"]"<<endl;

    cout<<"low right ["<<lowRight.GetX();
    cout<<", "<<lowRight.GetY()<<"]"<<endl;
}
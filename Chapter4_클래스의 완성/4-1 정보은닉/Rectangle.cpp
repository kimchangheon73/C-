#include <iostream>
#include "Rectangle.h"

using namespace std;

bool Rectangle::InitMember(const Point &ul, const Point &lr){
    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()){
        cout<<"Un Correct point "<<endl;
        return false;
    }
    upLeft = ul;
    lowRight = lr;
    return true;
}

void Rectangle::showRecInfo() const{
    cout<<"Left Up    = ["<<upLeft.GetX()<<", "<<upLeft.GetY()<<"]"<<endl;
    cout<<"Right Down = ["<<lowRight.GetX()<<", "<<lowRight.GetY()<<"]"<<endl;
}
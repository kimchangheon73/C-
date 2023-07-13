#include <iostream>
#include "3_Rectangle.h"
using namespace std;

bool Rectangle::InitMember(const Point &ul, const Point &lr){
    if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()){
        cout<<"Falut Point Recieve"<<endl;
        return false;
    }
    UpLeft = ul;
    DonwRight = lr;
    return true;
}

void Rectangle::showRecInfo() const{
    cout<<"Up Left    : "<<"["<<UpLeft.GetX() << ", "<<UpLeft.GetY()<<"]"<<endl;
    cout<<"Down Right : "<<"["<<DonwRight.GetX() << ", "<<DonwRight.GetY()<<"]"<<endl;
}
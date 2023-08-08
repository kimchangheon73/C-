#include <iostream>
#include "Rectangle.cpp"
using namespace std;

int main(){
    Point pos1;
    if (!pos1.InitMember(-2, 4))
        cout<<"(-2, 4) Init False"<<endl;

    if (!pos1.InitMember(2, 4))
        cout<<"(2, 4) Init False"<<endl;

    Point pos2;
    if (!pos2.InitMember(5, 9))
        cout<<"(5, 9) Init False"<<endl;

    Rectangle rec;
    if (!rec.InitMember(pos2, pos1))
        cout<<"(pos2, pos1) Init False"<<endl;

    if (!rec.InitMember(pos1, pos2))
        cout<<"(pos1, pos2) Init False"<<endl;

    rec.ShowRectangle();
    return 0;
}
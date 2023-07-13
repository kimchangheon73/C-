#include <iostream>
#include "3_Rectangle.h"
#include "3_Rectangle.cpp"

int main(){
    Point pos1;
    if (!pos1.InitMember(-2, 4)){
        cout<<"Init False"<<endl;
    }
    if (!pos1.InitMember(2,4)){
        cout<<"Init False"<<endl;
    }

    Point pos2;
    if (!pos2.InitMember(5,9)){
        cout<<"Init False"<<endl;
    }

    Rectangle rec;
    if (!rec.InitMember(pos2, pos1)){
        cout<<"Rectangle Init False"<<endl;
    }
    if (!rec.InitMember(pos1, pos2)){
        cout<<"Rectangle Init False"<<endl;
    }

    rec.showRecInfo();
    return 0;
}
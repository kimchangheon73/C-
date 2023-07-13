#include <iostream>
#include "Point.h"
#include "Point.cpp"

#include "Rectangle.h"
#include "Rectangle.cpp"

using namespace std;

int main(){
    Point pos1;
    if(!pos1.InitMembers(-2, 4)){
        cout<<"Init InComplete"<<endl;
    }
    if(!pos1.InitMembers(2, 4)){
        cout<<"Init InComplete"<<endl;  
    }
    
    Point pos2;
    if (!pos2.InitMembers(5,9)){
        cout<<"Init InComplete"<<endl;
    }

    Rectangle rec;
    if (!rec.InitMember(pos2, pos1)){
        cout<<"Rectangle Init InComplete"<<endl;
    }
    if (!rec.InitMember(pos1, pos2)){
        cout<<"Rectangle Init InComplete"<<endl;
    }

    rec.showRecInfo();
    return 0;
}

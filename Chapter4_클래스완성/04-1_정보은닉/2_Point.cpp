#include "2_Point.h"
#include <iostream>
using namespace std;

/* ============ 정보 은닉 ============
--> 멤버면수에 대한 직접접근을 차단하고 변수에 접근하는 
함수를 별도로 정의하여 안전한 형태의 접근을 우도하는 것



*/

bool Point::InitMember(int xpos, int ypos){
    if (xpos<0 || ypos<0){
        cout<<"False Input Value!"<<endl;
        return false;
    }else{
        x = xpos;
        y = ypos;
        return true;
    }
}

int Point::GetX() const{ // const 함수 : 함수 내에서 멤버변수에 저장된 값을 변경하지 않겠다라는 선언
    return x;
}

int Point::GetY() const{ // const 함수 : 함수 내에서 멤버변수에 저장된 값을 변경하지 않겠다라는 선언
    return y;
}

bool Point::SetX(int xpos){
    if (xpos<0 || x>100){
        cout<<"Out Range Number"<<endl;
        return false;
    }else{
        x = xpos;
        return true;
    }    
}

bool Point::SetY(int ypos){
    if (ypos<0 || x>100){
        cout<<"Out Range Number"<<endl;
        return false;
    }else{
        y = ypos;
        return true;
    }    
}
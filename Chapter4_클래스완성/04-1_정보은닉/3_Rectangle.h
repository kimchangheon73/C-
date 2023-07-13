#ifndef __3_RETANGLE_H__
#define __3_RETANGLE_H__
#include "2_Point.h"
#include "2_Point.cpp"
using namespace std;

/* Const 함수
-> 해당 함수 내에서는 멤버변수에 대한 값 변경을 허락하지 않겠다라는 선언
-> 
*/

class Rectangle{
    public:
        Point UpLeft;
        Point DonwRight;

    public:
        bool InitMember(const Point &ul, const Point &lr);
        void showRecInfo() const;
};

#endif
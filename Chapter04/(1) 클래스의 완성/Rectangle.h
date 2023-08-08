#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__

#include "Point.cpp"

class Rectangle{
    private:
        Point upLeft;
        Point lowRight;

    public:
        bool InitMember(const Point &p1, const Point &p2);
        void ShowRectangle() const; 
};


#endif 
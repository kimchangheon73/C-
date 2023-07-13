#ifndef __RECTANGLE_H__
#define __RECTANGLE_H__
#include "Point.h"

class Rectangle{
    private:
        Point upLeft;
        Point lowRight;
    public:
        bool InitMember(const Point &ul, const Point &lr);
        void showRecInfo() const;
};

#endif
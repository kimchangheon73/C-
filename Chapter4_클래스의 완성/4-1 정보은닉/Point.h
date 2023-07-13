#ifndef __POINT_H__
#define __POINT_H__

class Point{
    private:
        int x;
        int y;
    
    public:
        bool InitMembers(int xpos, int ypos);
        int GetX() const; // const 함수 지정 --> 이 함수 내에서는 멤버변수 변경을 허락하지 x
        int GetY() const;
        bool SetX(int xpos);
        bool SetY(int ypos); 
};


#endif
#ifndef __2_POINT_H__
#define __2_POINT_H__

class Point{
    private:
        int x;      // 0 ~ 100
        int y;      // 0 ~ 100
    
    public:
        bool InitMember(int xpos, int ypos);
        int GetX() const;
        int GetY() const;
        bool SetX(int xpos);
        bool SetY(int ypos);
};


#endif 
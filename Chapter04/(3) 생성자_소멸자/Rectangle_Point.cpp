#include <iostream>
using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(const int &xpos, const int &ypos);
        int GetX() const;
        int GetY() const;
        bool SetX(int xpos);
        bool SetY(int ypos);
};

Point::Point(const int &xpos, const int &ypos){
    x = xpos;
    y = ypos;
}

class Rectangle{
    private:    // 현재 위치에서는 호출할 생성자를 명시 할수 없음 --> 그래서 이니셜라이저를 제시
        Point upLeft;
        Point lowRight;
    public:
        Rectangle(const int &x1, const int &y1, const int &x2, const int &y2);
        void ShowRecInfo() const;
};

// 멤버 이니셜 라이저 기반 멤버 초기화
// 1. 메모리 공간 할당
// 2. 이니셜라이저를 이용한 멤버변수 초기화
// 3. 생성자의 몸체부분 실행
Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
    :upLeft(x1, y1), lowRight(x2, y2) { } // 각 upLeft, lowRight 생성 과정에서 각각을 인자로 받는 생성자를 호출하라

/* 문제03-1 [구조체 내에 함수 정의하기]

- 2차원 평산상의 좌표를 저장하는 구조체 Point를 정의하고 다음 3개의 함수를 구조체 내에 정의하라
- 점의 좌표를 이동, 점의 좌표 증가, 현재 좌표 정보 출력

*/

#include <iostream>

using namespace std;

struct Point{
    int x;
    int y;

    void MovePos(int mx, int my){
        x += mx;
        y += my;
    }

    void AddPoint(const Point &p){
        x += p.x;
        y += p.y;
    }

    void ShowPosition(){
        cout<<"["<<x<<", "<<y<<"]"<<endl;
    }

};

int main(){
    Point p1 = {12, 4};
    Point p2 = {20, 40};

    p1.MovePos(-7, 10);
    p1.ShowPosition();

    p1.AddPoint(p2);
    p1.ShowPosition();

    return 0;
}
#include <iostream>
using namespace std;

struct Point{
    int xpos;
    int ypos;

    // 1. 점의 좌표이동 함수
    void MovePos(int x, int y);

    // 2. 점의 좌표증가 함수
    void AddPoint(const Point &pos);

    // 3. 현재 좌표 정보 출력 함수
    void ShowState();
};

int main(){
    Point pos1 = {14, 4};
    Point pos2 = {20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowState();

    pos1.AddPoint(pos2);
    pos1.ShowState();

}



void Point::MovePos(int x, int y){
    xpos += x;
    ypos += y;
};

void Point::AddPoint(const Point &pos){
    xpos += pos.xpos;
    ypos += pos.ypos;
};

void Point::ShowState(){
    cout<<"pos : ["<<xpos<<", "<<ypos<<"]"<<endl;
};





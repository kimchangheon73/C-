#include <iostream>
#include <stdlib.h>

using namespace std;

/* 문제 : 구초체에 대한 new / delete 연산
- 구초체를 기반으로 두 점의 합을 계산 함수 PntAdder을 정의
- Point &PntAdder(const Point &p1, const Point &p2);
- 단, 포인터 관련 변수 선언은 new를 이용해야 한다.
- 할당된 메모리의 공간 소멸도 해야한다.
*/

typedef struct __Point{
    int xpos;
    int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2){
    Point *result = new Point;
    result->xpos = p1.xpos + p2.xpos;
    result->ypos = p1.ypos + p2.ypos;

    return *result; 
}

int main(){
    Point *p1 = new Point;
    Point *p2 = new Point;

    p1->xpos = 4;
    p2->xpos = 8;

    p1->ypos = 10;
    p2->ypos = 20;

    Point &result = PntAdder(*p1, *p2);

    cout<<"x pos = "<<result.xpos<<endl;
    cout<<"y pos = "<<result.ypos<<endl;

    delete p1;
    delete p2;
    delete &result;

    return 0;
}

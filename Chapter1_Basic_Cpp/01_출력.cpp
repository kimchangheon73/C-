#include <iostream>

// =========== 핵심 정리 ===========
// 1. C++에선 표준 라이브러리 호출시 확장자를 생략한다
// 2. C++에선 서식 문자를 지정하지 않아도 데이터 성격에 맞게 출력이 가능
// 3. C++에선 "<<"연산자를 이용해 대상을 연이어서 출력이 가능하다
// 4. C++에서 개행은 std::endl로 사용된다.
// ================================

int main(){
    int num = 10;
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Hello"<<" World"<<std::endl;
    std::cout<<"Hello";
    std::cout<<" "<<"Hello"<<std::endl;
    return 0; 
}


#include <iostream>

// =========== 핵심 ===========
// 1. 오버로딩 : 같은 이름의 함수를 매개변수 혹은 기능을 다르게 하여 여러개 만드는 것
// 2. C에서의 함수를 호출할 땐 "이름"을 기준으로 호출한다 -> C에선 오버로딩 불가
// 3. C++에선 함수를 호출할 땐 "이름"과 "매개변수"를 기준으로 호출한다

void MyFunc(void){
    std::cout<<"MyFunc(void)"<<std::endl;
};

void MyFunc(char c){
    std::cout<<"MyFunc(char c)"<<std::endl;
};

void MyFunc(int c){
    std::cout<<"MyFunc(int c)"<<std::endl;
};

// =========== 오버로딩 퀴즈 ===========
// 'Swap"이라는 함수를 3개 만드는데 입력인자로 각각 int, char, double을 2개씩 받아 출력하라
void Swap(int a, int b){
    std::cout<<a<<" "<<b<<std::endl;
};

void Swap(char a, char b){
    std::cout<<a<<" "<<b<<std::endl;
};

void Swap(double a, double b){
    std::cout<<a<<" "<<b<<std::endl;
};
int main(){
    MyFunc();
    MyFunc('A');
    MyFunc(3);

    std::cout<<std::endl;
    Swap(1, 2);
    Swap('A','B');
    Swap(1.4, 2.7);

    return 0;
}



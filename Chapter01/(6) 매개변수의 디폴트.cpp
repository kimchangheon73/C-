/*  함수의 매개변수에 "디폴트 값"의 의미

-------------다음 코드를 통해 확인한 사실--------------- 
- 함수의 "디폴트 값"
    - 정의 : 인자를 전달하지 않으면 해당 값이 전달된 것으로 간주한다.
    - 예시
        (1) int Func1(int a=7){}
                --> Func1() == Func(7)

        (2) int Func2(int a=5, int b=7){}
                --> Func2() == Func(5,7)

- 디폴트 값은 함수의 선언에만 위치한다
    - 함수의 선언부에 위치시켜야 컴파일러가 디폴트 값 지정 여부에 따라 
      적절한 함수를 호출할 수 있다

- 전달되는 인자는 왼쪽에서부터 채워지므로, 디폴트 값은 오른쪽에서 부터 채워져야 한다
    - int Func(int a,       int b,      int c=10){}     --> O
    - int Func(int a,       int b=20,   int c=10){}     --> O
    - int Func(int a=20,    int b,      int c=10){}     --> X
------------------------------------------------------
*/

#include <iostream>
int Addr(int num=1, int num2=2);    // 선언부

int Addr(int num=1, int num2=2){    // 정의부
    return num+num2;
}

int main(){
    std::cout<<Addr()<<std::endl;
    std::cout<<Addr(5)<<std::endl;
    std::cout<<Addr(5,3)<<std::endl;
}


/*(1) 참조자의 이해 
        - 정의 : 참조차는 기존 선언된 변수에 붙이는 "별칭"이다 */
void Ref_one(){
    int num1  = 2010;
    int &num2 = num1;
}



/*(2) 참조자의 예제와 선언*/
#include <iostream>
void Ref_Two(){
    int num1  = 1020;
    int &num2 = num1;
    num2 = 3040;

    std::cout<<"num1 = "<<num1<<std::endl;
    std::cout<<"num2 = "<<num2<<std::endl;
    std::cout<<"Addr num1 = "<<&num1<<std::endl;
    std::cout<<"Addr num2 = "<<&num2<<std::endl;

    // 참조자를 대상으로 참조 가능
    int a = 10;
    int &b = a;
    int &c = b;
    int &d = c;
}

/*(3) 참조자의 선언 가능 범위
        - int &ref = 20; (X)     --> 상수 대상으로 선언 불가능
        - int &ref;      (X)     --> 생성과 초기화를 별개로 불가능
        - int &ref = NULL(X)     --> 포인터 처럼 NULL초기화 불가능

참조자는 선언과 동시에 특정 변수를 참조애햐 한다. 그리고 참조한 이후에는 참조 대상을 변경할 수 없다.
*/
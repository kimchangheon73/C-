/*  Scanf를 대신하는 데이터의 입력

-------------다음 코드를 통해 확인한 사실--------------- 
1. 입력의 기본 구성         std::cin>>'변수'              
2. 변수의 선언 위치         함수의 중간에서도 변수의 선언이 가능 (17행, 21행)
-------------------------------------------------------

* 출력에서와 마찬가지로 입력에서도 별도의 서식 지정이 불필요하다  */

#include <iostream>

int main(){
    int val1;
    std::cout<<"Enter The First val1 : ";
    std::cin>>val1;

    int val2;
    std::cout<<"Enter The First val2 : ";
    std::cin>>val2;

    int result = val1 + val2;
    std::cout<<"Add Result = "<<result<<std::endl;
    return 0;
}
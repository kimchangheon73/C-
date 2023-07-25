/*  C++ 버전의 출력 프로그램

-------------다음 코드를 통해 확인한 사실--------------- 
1. 헤더파일의 선언      # include <iosteam>                 
2. 출력의 기본 구성     std::cout<<"출력대상1"<<"출력대상2"; 
3. 개행의 진행          std::endl을 이용한 개행의 성립            
-------------------------------------------------------

* C언어 에서는 출력의 대상에 따라 서식지정을 달리 했지만,
C++에서는 그러한 과정이 불필요 하다

*/


#include <iostream>

int main(){
    int num = 20;
    std::cout<<"Hello World"<<std::endl;
    std::cout<<"Hello"<<" "<<"World"<<std::endl;
    std::cout<<num<<" "<<"A";
    std::cout<<" "<<3.14<<std::endl;
}
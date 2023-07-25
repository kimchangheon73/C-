/*  배열 기반의 문자열 입출력

-------------다음 코드를 통해 확인한 사실--------------- 
문자열의 입력방식도 다른 데이터의 입력방식과 다르지 x
-------------------------------------------------------

*/

#include <iostream>

int main(){
    char name[100];
    char lang[200];

    std::cout<<"What is your Name : ";
    std::cin>>name;

    std::cout<<"What is your Favorite lang :";
    std::cin>>lang;

    std::cout<<"My Name is "<<name<<std::endl;
    std::cout<<"Favorte Lang is "<<lang<<std::endl;

    return 0;
}
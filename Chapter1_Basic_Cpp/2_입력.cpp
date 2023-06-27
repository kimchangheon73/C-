#include <iostream>

// ===== 핵심 정리 =====  
// 1. C++에서 데이터 입력시 "std::cin>>변수명" 문법을 사용한다
// 2. 입력되는 자료형은 선언한 변수명의 타입을 따라간다( 다른 타입 입력시 종료 됨)
// 3. 2개 이상의 자료 입력은 공백을 기준으로 구분한다

int main(){

    // ==================== 숫자형 자료 입력 ====================
    int number1; 
    std::cout<<"Enter the Number1 = ";
    std::cin>>number1;

    int number2;
    std::cout<<"Enter the Number2 = ";
    std::cin>>number2;

    int result = number1 + number2;
    std::cout<<"Result -> ";
    std::cout<<number1<<" + "<<number2<<" = "<<result<<std::endl;
    

    // ==================== 문자형 자료 입력 ====================
    char name[100];
    std::cout<<"Enter the your name : ";
    std::cin>>name;
    std::cout<<"Name = "<<name<<std::endl;


    // ==================== 2개 이상의 자료 입력 ====================
    int val1, val2;
    int add_val;

    std::cout<<"Enter the Two Number = ";
    std::cin>>val1>>val2;
    add_val = val1 + val2;
    std::cout<<"Result = "<<add_val<<std::endl;


    // ==================== 배열 기반 문자열 입출력 ====================
    char name2[100];
    char lang[200];

    std::cout<<"What is your name? = ";
    std::cin>>name2;

    std::cout<<"What is your favorite Computer Lang? = ";
    std::cin>>lang;

    std::cout<<"Name = "<<name2<<std::endl;;
    std::cout<<"Favorite lang = "<<lang<<std::endl;;


    



    return 0;
}
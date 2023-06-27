#include <iostream>

// 문제 1 -> 5개의 정수를 입력받아 합을 출력하는 프로그램(단, 입력은 각각 이뤄져야 한다)
void mission1(){
    int nums[5];
    int result = 0;

    for (int i = 0; i<5; i++){
        std::cout<<"Enter the "<<(i+1)<<" Number = ";
        std::cin>>nums[i];
    }
    for (int i = 0; i<5; i++){
        result += nums[i];
    }

    std::cout<<"Sum Result = "<<result<<std::endl;
}

// 문제 2 -> 이름과 전화번호를 문자열의 입력받아, 데이터를 그대로 출력하는 프로그램
void mission(){
    char name[100];
    char tel[20];

    std::cout<<"Your name = ";
    std::cin>>name;

    std::cout<<"Your tel = ";
    std::cin>>tel;

    std::cout<<"name = "<<name<<std::endl;
    std::cout<<"tel  = "<<tel<<std::endl;

}

// 문제 3 -> 숫자를 하나 입력받아 해당하는 구구단을 출력하는 프로그램(출력형식은 자유)
void mission3(){
    int num;
    std::cout<<"Enter the Number = ";
    std::cin>>num;

    for(int i = 1; i<10; i++){
        std::cout<<num<<"x"<<i<<" = "<<num*i<<std::endl;
    }

}

// 문제 4 -> 판매원의 급여 계산기를 작성 프로그램
//      이 회사는 모든 판매원에게 매달 50만원의 기본 그벼와 물품 판매 가격의 12%에 해당하는 돈을 지급한다.
//      예를 들어 100만원 판매시 50(만원) + 100(만원)*0.12로 62(만원)을 받는다.
//      단, 급여의 입력이 -1이 될 때까지 급여 계산이 반복되어야 한다. 


int main(){
    mission3();
    return 0;
}
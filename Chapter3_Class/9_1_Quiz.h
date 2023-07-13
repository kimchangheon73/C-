/* 문제 1
계산기 기능의 "Calculator" 클래스를 정의해보자. 기본 기능 사칙연산이며,
연산을 할때마다 어떤한 연산을 몇번 수행했는지 기록이 되어야 한다. 
*/

#ifndef __9_1_QUIZ_H__
#define __9_1_QUIZ_H__
#include <iostream>

using namespace std;

class Calculator{
    private:
        int add_cnt;
        int sub_cnt;
        int mul_cnt;
        int div_cnt;
    
    public:
        void Init();
        void ShowOpCnt();
        float Add(float num1, float num2);
        float Sub(float num1, float num2);
        float Mul(float num1, float num2);
        float Div(float num1, float num2);

};
void Calculator::Init(){
    add_cnt = 0;
    sub_cnt = 0;
    mul_cnt = 0;
    div_cnt = 0;
}

void Calculator::ShowOpCnt(){
    cout<<"Add : "<<Calculator::add_cnt<<" ";
    cout<<"Sub : "<<Calculator::sub_cnt<<" ";
    cout<<"Mul : "<<Calculator::mul_cnt<<" ";
    cout<<"Div : "<<Calculator::div_cnt<<endl;;

}

inline float Calculator::Add(float num1, float num2){
    float output = num1 + num2;
    Calculator::add_cnt += 1;
    return output;
}

inline float Calculator::Sub(float num1, float num2){
    float output = num1 - num2;
    Calculator::sub_cnt += 1;
    return output;
}

inline float Calculator::Mul(float num1, float num2){
    float output = num1 * num2;
    Calculator::mul_cnt += 1;
    return output;
}

inline float Calculator::Div(float num1, float num2){
    float output = num1 / num2;
    Calculator::div_cnt += 1;
    return output;
}

#endif

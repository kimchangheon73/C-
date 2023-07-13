#ifndef __4_CALCULATOR_H__
#define __4_CALCULATOR_H__
#include <iostream>
using namespace std;

class Carculator{
    private:
        int add_cnt;
        int sub_cnt;
        int mul_cnt;
        int div_cnt;

    public:
        void Init();
        void ShowCount();
        float Add(float a, float b);
        float Sub(float a, float b);
        float Mul(float a, float b);
        float Div(float a, float b);
        
};

void Carculator::Init(){
    add_cnt = 0;
    sub_cnt = 0;
    div_cnt = 0;
    mul_cnt = 0;

}

inline float Carculator::Add(float a, float b){
    float result = a + b;
    add_cnt += 1;
    return result;
};

inline float Carculator::Sub(float a, float b){
    float result = a - b;    
    sub_cnt += 1;
    return result;
};

inline float Carculator::Mul(float a, float b){
    float result = a * b;
    mul_cnt += 1;
    return result;
};

inline float Carculator::Div(float a, float b){
    float result = a / b;
    div_cnt += 1;
    return result;
};

void Carculator::ShowCount(){
    cout<<"Add CNT = "<<add_cnt<<" ";
    cout<<"Sub CNT = "<<sub_cnt<<" ";
    cout<<"Mul CNT = "<<mul_cnt<<" ";
    cout<<"Div CNT = "<<div_cnt<<" ";
    cout<<endl;
}


#endif
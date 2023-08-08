#include <iostream>
#include <cstring>
using namespace std;

class Calculator{
    private:
        int Add_cnt, Sub_cnt, Mul_cnt, Div_cnt;

    public:
        void Init(){
            Add_cnt = 0, Sub_cnt = 0;
            Mul_cnt = 0, Div_cnt = 0;
        }
        float Add(float a, float b){
            Add_cnt += 1;
            return a+b;
        }

        float Sub(float a, float b){
            Sub_cnt += 1;
            return a-b;
        }

        float Mul(float a, float b){
            Mul_cnt += 1;
            return a*b;
        }

        float Div(float a, float b){
            Div_cnt += 1;
            return a/b;
        }
        void ShowState(){
            cout<<"Add : "<<Add_cnt<<" ";
            cout<<"Sub : "<<Sub_cnt<<" ";
            cout<<"Mul : "<<Mul_cnt<<" ";
            cout<<"Div : "<<Div_cnt<<" "<<endl;;
        }
};

class Printer{
    private:
        char save_str[30];
    
    public:
        // C++에서는 문자열 상수는 문자 배열로 간주되며, 문자열 상수의 주소를 char*의 포인터에 할당하여 문제가 된다
        // 이러한 형식의 문자열 상수는 읽기전 용 메모리 영역에 저장되므로 수정이 불가능해야 한다. 
        // char *str (x) --> const char *str  혹은  const char str[]
        void SetString(const char str[]){ 
            strcpy(save_str, str); 
            }
        void ShowString(){
            cout<<save_str<<endl;
            }

};


int main(){
    Calculator cal;
    cal.Init();
    cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.5 - 1.7 = "<<cal.Sub(3.5, 1.7)<<endl;
    cout<<"2.2 * 1.5 = "<<cal.Mul(2.2, 1.5)<<endl;
    cout<<"4.9 - 1.2 = "<<cal.Sub(4.9, 1.2)<<endl;
    cal.ShowState();

    Printer pnt;
    pnt.SetString("Hello World");
    pnt.ShowString();

    pnt.SetString("I Love c++");
    pnt.ShowString();
    return 0;

}
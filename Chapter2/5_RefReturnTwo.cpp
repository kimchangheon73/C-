#include <iostream>

using namespace std;

int& RefRetFuncOne(int &ref){
    ref++;
    return ref;
}

int main(){
    int num1 = 1;
    int num2 = RefRetFuncOne(num1); // 반환 받는 변수가 int형 이기때문에 num1을 참조 x

    num1++;
    num2+=100;

    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
}
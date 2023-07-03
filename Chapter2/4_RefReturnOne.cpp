#include <iostream>
using namespace std;

/* 
================ 참조자 ================
핵심
--> 참조자의 반환은 참조 관계가 하나 더 추가되는 것을 의미한다
--> 다만, 함수 내 선언된 변수는 지역변수 이기에 반환 후 참조변수가 소멸될 뿐, 참조자는 그대로 유지 
========================================
*/

int& RefRetFuncOne(int &ref){
    ref ++;
    return ref;
}

int main(){
    int num1 = 1;
    int &num2 = RefRetFuncOne(num1);

    num1++;
    num2++;

    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

    return 0;

}
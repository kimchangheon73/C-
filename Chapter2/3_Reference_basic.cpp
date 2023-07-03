#include <iostream>
using namespace std;

/* 
================ 참조자 ================
1. 정의 : 자신이 참조하는 변수를 지정하는 다른 이름
2. "&참조변수 = 일반변수" 형식으로 지정

3. 참조자 수에는 제한 x, 
4. 이중삼중으로 참조선언이 가능

5. 참조차는 변수에 대해서만 선언이 가능 
6. 선언이 됨과 동시에 누군가를 참조
8. 참조자를 Null로 선언하기 불가능
========================================
*/


void Referen(){
    // 1. 일반 참조 
    int num1 = 1020;
    int &num2 = num1;

    num2 = 3040;
    cout<<"VAL: "<<num1<<endl;
    cout<<"REF: "<<num2<<endl;

    cout<<"VAL: "<<&num1<<endl;
    cout<<"REF: "<<&num2<<endl;
}

void ReArrElem(){
    // 2. 배열 참조
    int arr[3] = {1,3,5};
    int &ref1 = arr[0];
    int &ref2 = arr[1];
    int &ref3 = arr[2];

    cout<<"ref1 : "<<ref1<<endl;
    cout<<"ref2 : "<<ref2<<endl;
    cout<<"ref3 : "<<ref3<<endl;
}

void RefPointer(){
    // 3. 포인터 참조
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;

    int &ref = num;
    int *(&pref) = ptr;
    int **(&dpref) = dptr;

    cout<<"ref     : "<<ref<<endl;
    cout<<"*pref   : "<<*ptr<<endl;
    cout<<"**dpref : "<<**dpref<<endl;
}

void SwapByRef(int &ref1, int &ref2){
    // 매개변수 = 함수가 호출되어야 초기화가 진행되는 변수
    // 함수 호출 시 전달되는 인자로 초기화를 선언하기 때문에 문제 x
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

void Call_by_ref(){
    // 참조자에 의한 호출
    int val1 = 10;
    int val2 = 20;
    SwapByRef(val1, val2);
    cout<<"Val1 = "<<val1<<endl;
    cout<<"Val2 = "<<val2<<endl;
}

int main(){
    Call_by_ref();
    return 0;
}
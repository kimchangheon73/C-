#include <iostream>

using namespace std;

/* 
================ 상수화된 변수 ================
int a = 5;
--> 다음 코드에서 5는 리터럴 문자이다. 리터럴 문자는 다음행으로 넘어가게 되면 메모리에서 소멸된다.

const int a = 5;
--> 상수는 메모리에 계속 남아 이 값을 참조해야 하기 때문에 상수를 참조할 땐 "임시 변수"라는것을 만든다
--> 그리고 "임시 변수"를 이용해 참조가가 상수를 참조하게 하는 구조이다.
========================================
*/
int Adder(const int &num1, const int &num2){
    int result = num1 + num2;
    return result;
}

void main(){
    cout<<Adder(5,7)<<endl;
}
/*  함수의 오버로딩 

-------------다음 코드를 통해 확인한 사실--------------- 
C++은 함수 호출 시 다음 2가지를 참조하여 호출 함수를 결정한다
    - (1) 함수의 이름
    - (2) 전달되는 인자의 정보

즉, 매개변수의 선언이 다르다면 동일 이름의 함수 정의가 가능하고,
이러한 형태의 함수를 "함수의 오버로딩"이라고 한다

함수의 오버로딩 정의 시 중요한 점
    - (1) 함수의 매개변수 자료형이 다르다면 OK
            int Func(char c){}
            int Func(int n){}

    - (2) 함수의 매개변수 수가 다르다면 OK
            int Func2(int n){}
            int Func2(int a, int b){}

    - (3) 함수의 반환형의 차이는 X
            void Func3(int n){};
            int Func3(int n){}
------------------------------------------------------
*/


int Func(int num){
    num++;
    return num;
}

int Func(int num1, int num2){
    return num1 + num2;
}


int main(){
    Func(10);
    Func(1, 5);
    return 0;
}
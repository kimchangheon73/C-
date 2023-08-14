#include <iostream>

// 생성자 : 클래스의 이름과 동일하지만 반환을 하지 않는 함수
// --> 생성자는 오직 객체 생성시 한번만 호출된다.
// --> 생성자는 함수의 일종으로 오버로딩이 가능하다

class SimpleClass{
    private:
        int num;

    public:
        SimpleClass(int n){
            num = n;
        }
        int GetNum() const{
            return num;
        }
};


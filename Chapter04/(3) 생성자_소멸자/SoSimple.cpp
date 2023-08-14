#include <iostream>

// 이니셜라이저를 이용한 변수 및 상수의 초기화
// --> 이니셜라이저를 이용해 초기화 하는 경우 선언과 동시에 초기화가 된다. 

class SoSimple{
    private:
        int num1, num2;
    public:
        SoSimple(int n1, int n2)
        : num1(n1), num2(n2) {}
};


class FruitSeller{
    private:
        const int Apple_Price;
        int numOfApples;
        int MyMoney;
    public:
        FruitSeller(int price, int num, int money)
            :Apple_Price(price), numOfApples(num), MyMoney(money) {}
};


// 멤버변수로 참조자 선언하기
// --> 이니셜라이저의 초기화는 선언과 동시에 초기화 하는 형태이므로, 참조자의 초기화도 가능하다.

class BBB{
    private:
        SoSimple &ref;
        const int &num;

    public:
        BBB(SoSimple &r, const int &n)
            :ref(r), num(n) {}

}
/* 사과장수 - 고객 객체간의 상호작용!

사과장수
    - 사과 가격
    - 보유 사과 
    - 보유 수익

고객 
    - 소유 금액

- 기능 1: 사과 구매 
    - 구매자가 사과를 구매하면 판매자는 사과를 판다

- 기능 2: 잔액 표시
    - 구매자가 잔액을 표시하면 구매한 사과 갯수, 잔액을 표시
    - 판매자가 잔액을 표시하면 남은 사과 갯수와 수익을 표시

*/
#ifndef __10_OOP_H__
#define __10_OOP_H__

class FruitsSeller{
    private:
        int Apple_Price;
        int Apple_cnt;
        int Benefit;
    
    public:
        void InitMember(int Price, int cnt);
        void ShowNow();
        int Sell(int count, int money);
};

class FruitsBuyer{
    private:
        int now_Money;
        int Apple_cnt;

    public:
        void InitMember(int Money);
        void Purchase(FruitsSeller &seller, int count);
        void ShowNow();
};



#endif
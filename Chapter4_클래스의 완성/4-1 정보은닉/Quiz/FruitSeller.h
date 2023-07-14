#ifndef __FRUITSELLER_H__
#define __FRUITSELLER_H__

class FruitSeller{
    private:
        int Apple_price;
        int Apple_cnt;
        int Earn_Money;
    public:
        void InitMember(int price, int num, int money);
        int SaleApples(int money);
        void ShowSaleResult();
};

#endif
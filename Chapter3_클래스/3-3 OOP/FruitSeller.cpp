#include <iostream>
using namespace std;


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

void FruitSeller::InitMember(int price, int num, int money){
    Apple_price = price;
    Apple_cnt = num;
    Earn_Money = money;
}

int FruitSeller::SaleApples(int money){
    int num = money/Apple_price;
    Apple_cnt -= num;
    Earn_Money+= money;
    return num;
}

void FruitSeller::ShowSaleResult(){
    cout<<"Leave Apple Count = "<<Apple_cnt<<endl;
    cout<<"Leave Earn Money  = "<<Earn_Money<<endl<<endl;;
}

class FruitBuyer{
    private:
        int MyMoney;
        int numofApple;
    public:
        void InitMember(int money);
        void BuyApples(FruitSeller &seller, int money);
        void ShowBuyResult();
};

void FruitBuyer::InitMember(int money){
    MyMoney = money;
    numofApple = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money){
    numofApple += seller.SaleApples(money);
    MyMoney -= money;
}

void FruitBuyer::ShowBuyResult(){
    cout<<"Leave Money = "<<MyMoney<<endl;
    cout<<"Leave Apple = "<<numofApple<<endl<<endl;
}

int main(){
    FruitSeller seller;
    seller.InitMember(1000, 20, 0);

    FruitBuyer buyer;
    buyer.InitMember(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"Fruit Seller"<<endl;
    seller.ShowSaleResult();
    cout<<"Fruit Buyer"<<endl;
    buyer.ShowBuyResult();
    return 0;
}



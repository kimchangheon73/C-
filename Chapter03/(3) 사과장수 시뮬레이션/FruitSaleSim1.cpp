#include <iostream>
using namespace std;

class FruitSeller{
    private:
        int APPLE_PRICE;
        int NumOfApples;
        int MyMoney;

    public:
        void InitMember(int price, int num, int money){
            APPLE_PRICE = price;
            NumOfApples = num;
            MyMoney     = money;
        }
        int SalePrice(int money){
            int num = money/APPLE_PRICE;
            NumOfApples -= num;
            MyMoney += money;
            return num;
        }
        void showSaleResult(){
            cout<<"Left Apple = "<<NumOfApples<<endl;
            cout<<"Earn Money = "<<MyMoney<<endl;
        }
};

class FruitBuyer{
    int MyMoney;
    int numOfApples;

    public:
        void InitMember(int money){
            MyMoney = money;
            numOfApples = 0;
        }
        void BuyApples(FruitSeller &seller, int money){
            numOfApples += seller.SalePrice(money);
            MyMoney -= money;
        }
        void showSaleResult(){
            cout<<"Now Money  = "<<MyMoney<<endl;
            cout<<"Now Apples = "<<numOfApples<<endl;
        }

};

int main(){
    FruitSeller seller;
    FruitBuyer buyer;

    seller.InitMember(1000, 20, 0);
    buyer.InitMember(5000);

    buyer.BuyApples(seller, 2000);

    seller.showSaleResult();
    buyer.showSaleResult();

    return 0;
       
}
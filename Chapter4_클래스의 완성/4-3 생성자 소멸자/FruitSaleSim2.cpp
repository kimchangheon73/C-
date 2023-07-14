#include <iostream>
using namespace std;

class FruitSeller{
    private:
        int Apple_price;
        int numOfApples;
        int mymoney;
    public:
        // 생성자 선언
        FruitSeller(int price, int num, int money){ 
            Apple_price = price;
            numOfApples = num;
            mymoney = money;
        }
        int SaleApples(int money){
            int num = money / Apple_price;
            numOfApples -= num;
            mymoney += Apple_price*num;
            return num;
        }
        void ShowSalesResult() const{
            cout<<"Leave Apple ="<<numOfApples<<endl;
            cout<<"Benefit = "<<mymoney<<endl;
        }
};

class FruitBuyer{
    private:
        int mymoney;
        int numofApples;

    public:
        // 생성자 선언
        FruitBuyer(int money){
            mymoney = money;
            numofApples = 0;
        }
        void BuyApples(FruitSeller &seller, int money){
            numofApples += seller.SaleApples(money);
            mymoney -= money;
        }
        void ShowBuyResult() const{
            cout<<"Buyer Leave Money : "<<mymoney<<endl;
            cout<<"Buyer Apples : "<<numofApples<<endl;
        }
};

int main(){
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);

    cout<<"Seller Now"<<endl;
    seller.ShowSalesResult();
    cout<<"Buyer  Now"<<endl;
    buyer.ShowBuyResult();


    return 0;
}
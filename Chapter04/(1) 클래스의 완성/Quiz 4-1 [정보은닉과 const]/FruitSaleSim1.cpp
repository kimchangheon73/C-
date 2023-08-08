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
        void showSaleResult() const{
            cout<<"Left Apple = "<<NumOfApples<<endl;
            cout<<"Earn Money = "<<MyMoney<<endl;
        }
};

// 목적 : 사과 구매를 목적으로 0보다 작은수 입력 x
class FruitBuyer{
    int MyMoney;
    int numOfApples;

    public:
        void InitMember(int money){
            MyMoney = money;
            numOfApples = 0;
        }
        bool BuyApples(FruitSeller &seller, int money){
            if (money < 0){
                cout<<"Enter the 0<money"<<endl;
                return false;
            }
            
            numOfApples += seller.SalePrice(money);
            MyMoney -= money;
            return true;
        }
        void showSaleResult() const{
            cout<<"Now Money  = "<<MyMoney<<endl;
            cout<<"Now Apples = "<<numOfApples<<endl;
        }

};

int main(){
    FruitSeller seller;
    FruitBuyer buyer;

    seller.InitMember(1000, 20, 0);
    buyer.InitMember(5000);

    if (!buyer.BuyApples(seller, -2000))
        cout<<"-2000 Init False"<<endl;

    if (!buyer.BuyApples(seller, 2000))
        cout<<"+2000 Init False"<<endl;

    seller.showSaleResult();
    buyer.showSaleResult();

    return 0;
       
}
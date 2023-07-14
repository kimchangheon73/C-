#include "FruitBuyer.h"
#include "FruitBuyer.cpp"
#include "FruitSeller.h"
#include "FruitSeller.cpp"

int main(){
    FruitSeller seller;
    seller.InitMember(1000, 20, 0);

    FruitBuyer buyer;
    buyer.InitMember(5000);
    buyer.BuyApples(seller, 7000);

    cout<<"Fruit Seller"<<endl;
    seller.ShowSaleResult();
    cout<<"Fruit Buyer"<<endl;
    buyer.ShowBuyResult();


    return 0;
}
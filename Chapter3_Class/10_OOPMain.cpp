#include "10_OOP.h"
#include "10_OOP.cpp"
#include <iostream>

using namespace std;

int main(){
    FruitsSeller seller;
    seller.InitMember(700, 120);
    seller.ShowNow();

    FruitsBuyer buyer;
    buyer.InitMember(10000);
    buyer.ShowNow();

    buyer.Purchase(seller, 7);
    cout<<"Now Seller ";
    seller.ShowNow();
    cout<<"Now Buyer ";
    buyer.ShowNow();

    buyer.Purchase(seller, 8);
    cout<<"Now Seller ";
    seller.ShowNow();
    cout<<"Now Buyer ";
    buyer.ShowNow();

    buyer.Purchase(seller, 5);
    cout<<"Now Seller ";
    seller.ShowNow();
    cout<<"Now Buyer ";
    buyer.ShowNow();



    return 0;
}
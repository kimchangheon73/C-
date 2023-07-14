#include <iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"

using namespace std;

void FruitBuyer::InitMember(int money){
    MyMoney = money;
    numofApple = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money){
    if (money<=MyMoney){
        numofApple += seller.SaleApples(money);
        if (numofApple == 0){
            return ;
            }
        else{
            MyMoney -= money;
        }
    }else{
        cout<<"Not Enough Money"<<endl;
        return;
    }
    
    
}

void FruitBuyer::ShowBuyResult(){
    cout<<"Leave Money = "<<MyMoney<<endl;
    cout<<"Leave Apple = "<<numofApple<<endl<<endl;
}
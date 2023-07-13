#include <iostream>
#include "10_OOP.h"

using namespace std;

void FruitsSeller::InitMember(int Price, int cnt){
    Apple_Price = Price;
    Apple_cnt = cnt;
    Benefit = 0;
}

void FruitsSeller::ShowNow(){
    cout<<endl;
    cout<<"Apple Price = "<<Apple_Price<<endl;
    cout<<"Left  Count = "<<Apple_cnt<<endl;
    cout<<"Benefit     = "<<Benefit<<endl;
    cout<<endl;
}

int FruitsSeller::Sell(int count, int money){
    if (count*Apple_Price > money){
        cout<<"Sry, Not enough Money"<<endl;
        return money;
    }else{
        cout<<"Thank you ~ "<<endl;
        Apple_cnt -= count;
        Benefit += FruitsSeller::Apple_Price*count;
        return money - (Apple_Price*count);
    }
}


void FruitsBuyer::InitMember(int Money){
    now_Money = Money;
    Apple_cnt = 0;
}

void FruitsBuyer::ShowNow(){
    cout<<endl;
    cout<<"Left money = "<<now_Money<<endl;
    cout<<"Purchase Apple = "<<Apple_cnt<<endl;
    cout<<endl;
}

void FruitsBuyer::Purchase(FruitsSeller &seller, int count){
    int now_money = now_Money;
    now_Money = seller.Sell(count, now_money);
    if (now_money !=  now_Money){
        Apple_cnt += count;
    }
    
}
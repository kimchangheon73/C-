#include "FruitSeller.h"
#include <iostream>
using namespace std;


void FruitSeller::InitMember(int price, int num, int money){
    Apple_price = price;
    Apple_cnt = num;
    Earn_Money = money;
}

int FruitSeller::SaleApples(int money){
    if (money>0){
      int num = money/Apple_price;
        if (num>=1){
            Earn_Money += num*Apple_price;
            Apple_cnt -= num;
            return num;
        }else{
            cout<<"Not Enought Money"<<endl;
        }  
    }else{
        cout<<"Can't Purchase Apple"<<endl;
        return 0;
    }
    
    
}

void FruitSeller::ShowSaleResult(){
    cout<<"Leave Apple Count = "<<Apple_cnt<<endl;
    cout<<"Leave Earn Money  = "<<Earn_Money<<endl<<endl;;
}
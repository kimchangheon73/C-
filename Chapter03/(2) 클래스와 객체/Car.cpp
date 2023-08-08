#include <iostream>
#include <cstring>
#include "Car.h"
using namespace std;

void Car::MemberInit(char *ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed  = 0;
}

void Car::ShowCarState(){
    cout<<"gameIDd      = "<<gamerID<<endl;
    cout<<"fuelGauge    = "<<fuelGauge<<"%"<<endl;
    cout<<"curSpeed     = "<<curSpeed<<"km/s"<<endl;
    cout<<endl;
}

void Car::Accel(){
    if (fuelGauge<=0)
        return;
    else
        fuelGauge -= Car_Const::FUEL_STEP;
    
    if (curSpeed>=Car_Const::MAX_SPD)
        return;
    else
        curSpeed += Car_Const::ACC_STEP;
}

void Car::Break(){
    if (curSpeed<Car_Const::BRK_STEP)
        return ;
    else
        curSpeed-=Car_Const::BRK_STEP;
}
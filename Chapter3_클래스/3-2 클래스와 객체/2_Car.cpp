#include "2_Car.h"
#include <iostream>
#include <cstring>
using namespace std;

void Car::InitMember(char * ID, int fuel){
    strcpy(GamerID, ID);    // str2를 str1에 지정한 위치로 복사하는 방법
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::showCarState(){
    cout<<"User ID   = "<<GamerID<<endl;
    cout<<"Car Fuel  = "<<fuelGauge<<"%"<<endl;
    cout<<"Cur Speed = "<<curSpeed<<"km/s"<<endl;
    cout<<endl;
}

void Car::Accel(){
    if (fuelGauge <= 0)
        return ;
    else
        fuelGauge-=CAR_CONST::FUEL_STEP;
    
    if (curSpeed+CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD){
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break(){
    if (curSpeed<CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return ;
    }
    curSpeed-=CAR_CONST::BRK_STEP;
}
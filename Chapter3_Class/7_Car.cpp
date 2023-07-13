#include <iostream>
#include <cstring>
#include "7_Car.h"

using namespace std;


void Car::initMember(const char * ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::ShowCarState(){
    cout<<endl;
    cout<<"Car ID    :"<<gamerID<<endl;
    cout<<"Car fule  :"<<fuelGauge<<"%"<<endl;
    cout<<"Car Speed :"<<curSpeed<<"km/s"<<endl;
}

void Car::Accel(){
    if (fuelGauge <= 0){
        return;
    }else{
        fuelGauge -= CAR_CONST::FUEL_STEP;
    }
    if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD){
        curSpeed = CAR_CONST::MAX_SPD;
    }else{
        curSpeed += CAR_CONST::ACC_STEP;
    }
}

void Car::Break(){
    if (curSpeed<CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}


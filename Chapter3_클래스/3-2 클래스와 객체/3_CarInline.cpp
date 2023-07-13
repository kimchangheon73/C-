#include <cstring>
#include "3_CarInline.h"
using namespace std;

void Car::InitMember(const char * ID, int fuel){
    strcpy(GamerID, ID);    // str2를 str1에 지정한 위치로 복사하는 방법
    fuelGauge = fuel;
    curSpeed = 0;
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
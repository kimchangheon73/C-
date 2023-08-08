#include <cstring>
#include "CarInline.h"
using namespace std;

void Car::MemberInit(char *ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed  = 0;
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
#include "3_CarInline.h"
#include "3_CarInline.cpp"

int main(){
    Car car;
    car.InitMember("run99", 100);
    car.Accel();
    car.Accel();
    car.showCarState();
    car.Break();
    car.showCarState();

    return 0;
}
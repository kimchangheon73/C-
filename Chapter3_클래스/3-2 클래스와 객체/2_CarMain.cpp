#include "2_Car.h"
#include "2_Car.cpp"

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
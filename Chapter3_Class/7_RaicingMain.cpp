#include "7_Car.h"
#include "7_Car.cpp"

int main() {
    Car run99;
    run99.initMember("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();


    return 0;
}
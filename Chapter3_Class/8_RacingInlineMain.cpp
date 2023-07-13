#include "8_CarInline.h"
#include "8_CarInline.cpp"

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
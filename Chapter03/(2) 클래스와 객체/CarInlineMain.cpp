#include "CarInline.cpp"

int main(){
    Car car99;
    car99.MemberInit("run99", 100);
    car99.Accel();
    car99.Accel();
    car99.ShowCarState();
    car99.Break();
    car99.ShowCarState();
}

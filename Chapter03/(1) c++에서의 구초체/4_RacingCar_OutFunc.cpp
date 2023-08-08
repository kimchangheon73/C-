#include <iostream>
using namespace std;

// 특별한 구조체에게만 의미가 있는 상수만을 무오사 구조체 내에서만 유효한 상수를 정의
namespace Car_Const{
    enum{
        ID_LEN      = 20,
        MAX_SPD     = 200,
        FUEL_STEP   = 2,
        ACC_STEP    = 10,
        BRK_STEP    = 10
    };
}

struct Car{   
    // 멤버변수 선언
    char gamerID[Car_Const::ID_LEN];
    int  fuelGauge;
    int  curSpeed;

    void ShowCarState();
    void Accel();
    void Break();
};

int main(){
    Car car99 = {"Car99", 100, 0};
    car99.Accel();
    car99.Accel();
    car99.ShowCarState();
    car99.Break();
    car99.ShowCarState();

    Car car77 = {"car77", 100, 0};
    car77.Accel();
    car77.Accel();
    car77.ShowCarState();
    car77.Break();
    car77.ShowCarState();
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
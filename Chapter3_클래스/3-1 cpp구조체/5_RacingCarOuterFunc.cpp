#include <iostream>
using namespace std;

namespace CAR_CONST{

    enum{
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}

struct Car{
    char GamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

    void showCarState();
    void Accel();
    void Break();
};

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

int main(){
    Car car = {"Racer1", 100, 0};
    car.Accel();
    car.Accel();
    car.showCarState();
    car.Break();
    car.showCarState();

    return 0;
}
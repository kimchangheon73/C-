#include <iostream>
using namespace std;

// define : 상수 혹은 매크로 함수를 지정하는 전처리문
#define ID_LEN 20       
#define MAX_SPD  200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10


struct Car{
    char GamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;
};

void showCarState(const Car &car){
    cout<<"User ID   = "<<car.GamerID<<endl;
    cout<<"Car Fuel  = "<<car.fuelGauge<<"%"<<endl;
    cout<<"Cur Speed = "<<car.curSpeed<<"km/s"<<endl;
    cout<<endl;
}

void Accel(Car &car){
    if (car.fuelGauge <= 0)
        return ;
    else
        car.fuelGauge-=FUEL_STEP;
    
    if (car.curSpeed+ACC_STEP >= MAX_SPD){
        car.curSpeed = MAX_SPD;
        return;
    }
    car.curSpeed += ACC_STEP;
}

void Break(Car &car){
    if (car.curSpeed< BRK_STEP){
        car.curSpeed = 0;
        return ;
        }

    car.curSpeed -= BRK_STEP;
}

int main(){
    Car car = {"Racer1", 100, 0};
    Accel(car);
    Accel(car);
    showCarState(car);
    Break(car);
    showCarState(car);

    return 0;
}


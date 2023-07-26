#include <iostream>
using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct Car{
    char gameIDd[ID_LEN];
    int fuelGauge;
    int curSpeed;
};

// Car의 현재 상태를 보여주는 함수
void CarState(const Car &car){
    cout<<"gameIDd      = "<<car.gameIDd<<endl;
    cout<<"fuelGauge    = "<<car.fuelGauge<<"%"<<endl;
    cout<<"curSpeed     = "<<car.curSpeed<<"km/s"<<endl;
    cout<<endl;
}

// Car의 스피드를 올리는 함수
void Accel(Car &car){
    if (car.fuelGauge<=0)
        return;
    else
        car.fuelGauge -= FUEL_STEP;
    
    if (car.curSpeed>=MAX_SPD)
        return;
    else
        car.curSpeed += ACC_STEP;
}


// Car의 스피드를 줄이는 함수
void Break(Car &car){
    if (car.curSpeed<BRK_STEP)
        return ;
    else
        car.curSpeed-=BRK_STEP;
}


int main(){
    Car run99 = {"run99", 100, 0};
    Accel(run99);
    Accel(run99);
    CarState(run99);
    Break(run99);
    CarState(run99);


    Car run77 = {"run77", 100, 0};
    Accel(run77);
    Accel(run77);
    CarState(run77);
    Break(run77);
    CarState(run77);

    return 0;

}



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

    void showCarState(){
        cout<<"User ID   = "<<GamerID<<endl;
        cout<<"Car Fuel  = "<<fuelGauge<<"%"<<endl;
        cout<<"Cur Speed = "<<curSpeed<<"km/s"<<endl;
        cout<<endl;
    }

    void Accel(){
        if (fuelGauge <= 0)
            return ;
        else
            fuelGauge-=FUEL_STEP;
        
        if (curSpeed+ACC_STEP >= MAX_SPD){
            curSpeed = MAX_SPD;
            return;
        }
        curSpeed += ACC_STEP;
    }
    void Break(){
        if (curSpeed<BRK_STEP){
            curSpeed = 0;
            return ;
        }
        curSpeed-=BRK_STEP;
    }
};

int main(){
    Car car = {"Racer1", 100, 0};
    car.Accel();
    car.Accel();
    car.showCarState();
    car.Break();
    car.showCarState();

    return 0;
}

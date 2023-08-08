#include <iostream>
using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct Car{   
    // 멤버변수 선언
    char gamerID[ID_LEN];
    int  fuelGauge;
    int  curSpeed;

    void ShowCarState(){
        cout<<"gameIDd      = "<<gamerID<<endl;
        cout<<"fuelGauge    = "<<fuelGauge<<"%"<<endl;
        cout<<"curSpeed     = "<<curSpeed<<"km/s"<<endl;
        cout<<endl;
    }

    void Accel(){
        if (fuelGauge<=0)
            return;
        else
            fuelGauge -= FUEL_STEP;
        
        if (curSpeed>=MAX_SPD)
            return;
        else
            curSpeed += ACC_STEP;
    }

    void Break(){
    if (curSpeed<BRK_STEP)
        return ;
    else
        curSpeed-=BRK_STEP;
    }
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
    car77
    .ShowCarState();
}

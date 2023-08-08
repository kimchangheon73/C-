#include <iostream>
#include <cstring>
using namespace std;

namespace Car_Const{
    enum{
        ID_LEN      = 20,
        MAX_SPD     = 200,
        FUEL_STEP   = 2,
        ACC_STEP    = 10,
        BRK_STEP    = 10
    };
}

class Car{
    private:
        char gamerID[Car_Const::ID_LEN];
        int  fuelGauge;
        int  curSpeed;
    
    public:
        void MemberInit(char *id, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};




int main(){
    Car car99;
    car99.MemberInit("run99", 100);
    car99.Accel();
    car99.Accel();
    car99.ShowCarState();
    car99.Break();
    car99.ShowCarState();
}





void Car::MemberInit(char *ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed  = 0;
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
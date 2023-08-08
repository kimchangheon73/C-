#ifndef __CARINLINE_H__
#define __CARINLINE_H__
#include <iostream>
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


inline void Car::ShowCarState(){
    cout<<"gameIDd      = "<<gamerID<<endl;
    cout<<"fuelGauge    = "<<fuelGauge<<"%"<<endl;
    cout<<"curSpeed     = "<<curSpeed<<"km/s"<<endl;
    cout<<endl;
}

inline void Car::Break(){
    if (curSpeed<Car_Const::BRK_STEP)
        return ;
    else
        curSpeed-=Car_Const::BRK_STEP;
}


#endif 
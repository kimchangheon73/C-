#ifndef __3_CARINLINE_H__
#define __3_CARINLINE_H__
#include <iostream>
using namespace std;

namespace CAR_CONST{
    enum{
        ID_LEN = 20,        MAX_SPD = 200,        FUEL_STEP = 2,
        ACC_STEP = 10,        BRK_STEP = 10
    };
}

class Car{
    private: // 접근 제한자 지정
        char GamerID[CAR_CONST::ID_LEN];
        int fuelGauge;
        int curSpeed;

    public: // 접근 제한자 지정
        void InitMember(const char * ID, int fuel);
        void showCarState();
        void Accel();
        void Break();
};

inline void Car::showCarState(){
    cout<<"User ID   = "<<GamerID<<endl;
    cout<<"Car Fuel  = "<<fuelGauge<<"%"<<endl;
    cout<<"Cur Speed = "<<curSpeed<<"km/s"<<endl;
    cout<<endl;
}

inline void Car::Break(){
    if (curSpeed<CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return ;
    }
    curSpeed-=CAR_CONST::BRK_STEP;
}



#endif
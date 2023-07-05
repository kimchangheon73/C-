#include <iostream>
using namespace std;


/* =============== 구조체 외부에 함수 지정 =============== */
/* --> 구조체 내부에 함수를 선언하고 외부에 함수를 정의한다 */

namespace CAR_CONST{
    enum{
        ID_LEN      = 20,
        MAX_SPD     = 200,
        FUEL_STEP   = 2,
        ACC_STEP    = 10,
        BRK_STEP    = 10
    };
}

struct  Car{
    char gamerID[CAR_CONST::ID_LEN];
    int fuleGauge;
    int curSpeed;

    void ShowCarState();
    void Accel();
    void Break();

};

void Car::ShowCarState(){
    cout<<endl;
    cout<<"Car ID    :"<<gamerID<<endl;
    cout<<"Car fule  :"<<fuleGauge<<"%"<<endl;
    cout<<"Car Speed :"<<curSpeed<<"km/s"<<endl;
}

void Car::Accel(){
    if (fuleGauge <= 0){
        return;
    }else{
        fuleGauge -= CAR_CONST::FUEL_STEP;
    }
    if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD){
        curSpeed = CAR_CONST::MAX_SPD;
    }else{
        curSpeed += CAR_CONST::ACC_STEP;
    }
}

void Car::Break(){
    if (curSpeed<CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

int main(){
    Car run99 = {"run99", 100, 0};
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car run77 = {"run77", 100, 0};
    run77.Accel();
    run77.Break();
    run77.ShowCarState();

    return 0;
}
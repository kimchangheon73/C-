#include <iostream>
using namespace std;

/* =============== 구조체 내부에 Enum 상수 지정 =============== */
/* --> 따로 지정해 놓았기 때문에 어느 영역에 선언되고 사용되는 상수인지 쉽게 파악 할 수 있다. (가독성 up)*/

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

    void ShowCarState(){
        cout<<endl;
        cout<<"Car ID    :"<<gamerID<<endl;
        cout<<"Car fule  :"<<fuleGauge<<"%"<<endl;
        cout<<"Car Speed :"<<curSpeed<<"km/s"<<endl;
    }

    void Accel(){
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
    void Break(){
        if (curSpeed<CAR_CONST::BRK_STEP){
            curSpeed = 0;
            return;
        }
        curSpeed -= CAR_CONST::BRK_STEP;
    }

};

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
/* =============== 구조체 내부에 함수 입력 =============== */

#include <iostream>
using namespace std;

#define ID_LEN      20
#define MAX_SPD     200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

struct  Car{
    char gamerID[ID_LEN];
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
            fuleGauge -= FUEL_STEP;
        }
        if (curSpeed + ACC_STEP >= MAX_SPD){
            curSpeed = MAX_SPD;
        }else{
            curSpeed += ACC_STEP;
        }
    }
    void Break(){
        if (curSpeed<BRK_STEP){
            curSpeed = 0;
            return;
        }
        curSpeed -= BRK_STEP;
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
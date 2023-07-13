#include <iostream>
#include <cstring>
using namespace std;

/* 주요 핵심
- 함수의 정의를 클래스 외부에 지정하여도, 클래스의 일부로 인식되어 함수 내의 private로 선언된 변수 접근이 가능
- Default 접근제한자
    - 구조체 = public
    - 클래스 = private
*/


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
        void InitMember(char * ID, int fuel);
        void showCarState();
        void Accel();
        void Break();
};

void Car::InitMember(char *ID, int fuel){
    strcpy(GamerID, ID);    // str2를 str1에 지정한 위치로 복사하는 방법
    fuelGauge = fuel;
    curSpeed = 0;
}

void Car::showCarState(){
    cout<<"User ID   = "<<GamerID<<endl;
    cout<<"Car Fuel  = "<<fuelGauge<<"%"<<endl;
    cout<<"Cur Speed = "<<curSpeed<<"km/s"<<endl;
    cout<<endl;
}

void Car::Accel(){
    if (fuelGauge <= 0)
        return ;
    else
        fuelGauge-=CAR_CONST::FUEL_STEP;
    
    if (curSpeed+CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD){
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break(){
    if (curSpeed<CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return ;
    }
    curSpeed-=CAR_CONST::BRK_STEP;
}

int main(){
    Car car;
    car.InitMember("run99", 100);
    car.Accel();
    car.Accel();
    car.showCarState();
    car.Break();
    car.showCarState();

    return 0;
}
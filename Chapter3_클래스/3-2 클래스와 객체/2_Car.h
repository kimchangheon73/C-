#ifndef __2__CAR_H__
#define __2__CAR_H__

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


#endif
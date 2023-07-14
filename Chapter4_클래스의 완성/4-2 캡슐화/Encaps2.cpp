#include <iostream>
using namespace std;

class SinivelCap{ // 콧물 처치용 캡슐
    public:
        void take() const {cout<<"Stop Noise Water!"<<endl;}
};

class SneezeCap{
    public:
        void take() const {cout<<"Stop Sneeze !"<<endl;}
};

class SnuffleCap{
    public:
        void take() const {cout<<"Noise BBung!"<<endl;}
};

class CONTAC600{
    private:
        SinivelCap scap;
        SneezeCap zcap;
        SnuffleCap ncap;

    public:
        void take() const{
            scap.take();
            zcap.take();
            ncap.take();
        }
};

class ColdPatient{
    public:
        void takeCONTAC(const CONTAC600 &cap){
            cap.take();
        }
};

int main(){ 
    CONTAC600 con;
    ColdPatient pat;

    pat.takeCONTAC(con);
    return 0;
}
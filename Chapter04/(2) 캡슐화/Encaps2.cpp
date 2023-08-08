#include <iostream>
using namespace std;

// 콧물 처치용 캡슐
class SinivelCap{
    public:
        void take() const {cout<<"Nose ReCover!"<<endl;}
};

// 재채기 처치용 캡슐
class SneezeCap{
    public:
        void take() const {cout<<"Sneeze ReCover!"<<endl;}
};

// 코막힘 처치용 캡슐
class SnuffleCap{
    public:
        void take() const {cout<<"Snuffle ReCover!"<<endl;}
};

// 복용순서를 고정한 Contac600클래스 선언
class CONTAC600{
    private:
        SinivelCap scap;
        SneezeCap zcap;
        SnuffleCap ncap;
    public:
        void take() const {
            scap.take();
            zcap.take();
            ncap.take();
        }
};

class ColdPatient{
    public:
        void TakeCONTAC600(const CONTAC600 &cap) const {cap.take();}
        
};

int main(){
    CONTAC600 contac;

    ColdPatient suffer;
    suffer.TakeCONTAC600(contac);

    return 0;
}
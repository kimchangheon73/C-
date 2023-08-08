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

class ColdPatient{
    public:
        void TakeSinivelCap(const SinivelCap &cap) const {cap.take();}
        void TakeSneezeCap(const SneezeCap &cap) const {cap.take();}
        void TakeSnuffleCap(const SnuffleCap &cap) const {cap.take();}
};

int main(){
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient suffer;
    suffer.TakeSinivelCap(scap);
    suffer.TakeSneezeCap(zcap);
    suffer.TakeSnuffleCap(ncap);

    return 0;
}
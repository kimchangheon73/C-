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

class ColdPatient{
    public:
        void takeSinivelCap(const SinivelCap &cap) const {cap.take();}
        void takeSneezelCap(const SneezeCap &cap) const {cap.take();}
        void takeSnufflelCap(const SnuffleCap &cap) const {cap.take();}
};

int main(){
    SinivelCap scap;
    SneezeCap zcap;
    SnuffleCap ncap;

    ColdPatient sufferer;
    sufferer.takeSinivelCap(scap);
    sufferer.takeSneezelCap(zcap);
    sufferer.takeSnufflelCap(ncap);

    return 0;
}

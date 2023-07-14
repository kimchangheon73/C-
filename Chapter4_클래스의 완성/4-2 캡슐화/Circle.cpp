#include <iostream>
using namespace std;

class Point{
    private:
    int xpos, ypos;

    public:
        void init(int x, int y){
            xpos = x;
            ypos = y;
        }
        void showPointInfo() const{
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
};

class Circle{
    private:
        Point pos;
        float R;
    
    public:
        void MemberInit(int x1, int y1, int r1){
            pos.init(x1, y1);
            R = r1;
        }
        void showCircleInfo() const{
            cout<<"Radius : "<<R<<endl;
            pos.showPointInfo();
        }
};

class Ring{
    private:
        Circle c1;
        Circle c2;
    public:
        void MemberInit(int x1, int y1, int r1, int x2, int y2, int r2){
            c1.MemberInit(x1, y1, r1);
            c2.MemberInit(x2, y2, r2);
        }
        void showRingInfo() const{
            cout<<"Inner Circle Info..."<<endl;
            c1.showCircleInfo();
            cout<<"Outter Circle Info"<<endl;
            c2.showCircleInfo();
        }
};

int main(){
    Ring ring;
    ring.MemberInit(1,1,4,2,2,9);
    ring.showRingInfo();

    return 0;
}
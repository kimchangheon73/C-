#include <iostream>
using namespace std;

class Point{
    private:
        int xpos;
        int ypos;
    public:
        void Init(int x, int y){
            xpos = x;
            ypos = y;
        }

        void showInfo() const{
            cout<<"["<<xpos<<", "<<ypos<<"]"<<endl;
        }
};

class Circle{
    private:
        Point p1;
        Point p2;

        int radius1;
        int radius2;
    
    public:
        void Init(int x1, int y1, int r1, int x2, int y2, int r2){
            p1.Init(x1, y1);
            radius1 = r1;
            p2.Init(x2, y2);
            radius2 = r2;
        }
        void showinfo(){
            cout<<"Inner Circle Info..."<<endl;
            cout<<"radius : "<<radius1<<endl;
            p1.showInfo();
            cout<<"Outer Circle Info..."<<endl;
            cout<<"radius : "<<radius2<<endl;
            p2.showInfo();
        }
        
};

int main(){
    Circle ring;
    ring.Init(1,1,4,2,2,9);
    ring.showinfo();
    return 0;
}
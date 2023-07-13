#include "9_1_Quiz.h"
#include <iostream>

using namespace std;


int main(){
    Calculator cal;
    cal.Init();
    cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.2 - 1.7 = "<<cal.Sub(3.2, 1.7)<<endl;
    cout<<"2.2 * 1.5 = "<<cal.Mul(2.2, 1.5)<<endl;
    cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
    cal.ShowOpCnt();

    return 0;
}
#include <iostream>
#include "4_Calculator.h"
using namespace std;

int main(){
    Carculator cal;
    cal.Init();
    cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.2 - 2.4 = "<<cal.Sub(3.2, 2.4)<<endl;
    cout<<"3.2 / 2.46 = "<<cal.Div(3.2, 2.46)<<endl;
    cout<<"3.2 / 2.4 = "<<cal.Div(3.2, 2.4)<<endl;
    cal.ShowCount();
    return 0;
}

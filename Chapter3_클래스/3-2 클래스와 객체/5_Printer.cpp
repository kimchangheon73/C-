#include "5_Printer.h"
#include <iostream>
using namespace std;

int main(){
    Printer pnt;
    pnt.setString("Hello World!");
    pnt.showString();

    pnt.setString("I love C++");
    pnt.showString();

    return 0;
}
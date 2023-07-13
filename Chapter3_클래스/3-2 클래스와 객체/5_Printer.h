#ifndef __5_PRINTER_H__
#define __5_PRINTER_H__
#include <iostream>
#include <cstring>
using namespace std;

class Printer{
    private:
        char *str;
    public:
        void setString(char *msg);
        void showString();
};

void Printer::setString(char *msg){
    str = msg;
    return;
}

void Printer::showString(){
    cout<<str<<endl;
    return;
}

#endif
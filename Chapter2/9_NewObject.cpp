#include <iostream>
#include <stdlib.h>

using namespace std;

/* 
================ 선언과 삭제 ================
핵심 : new와 malloc 함수의 동작 방식에는 차이가 존재한다.


========================================
*/

class Simple{
    public:
        Simple(){
            cout<<"I am simple constructor!"<<endl;
        }
    };

int main(){
    cout<<"case 1 : ";
    Simple *sp1 = new Simple;

    cout<<"case 2 : ";
    Simple *sp2 = (Simple *)malloc(sizeof(Simple)*1);

    cout<<endl;
    cout<<"end of main"<<endl;
    
    delete sp1;
    free(sp2);
    return 0;
}

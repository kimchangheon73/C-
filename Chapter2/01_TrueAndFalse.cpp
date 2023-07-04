#include <iostream>
using namespace std;

/*
=============== 핵심 ===============
1. 숫자 1/0 이 true/false를 나타내는 것이 아니다
2. true/false를 출력할 때 1/0을 사용한 것이다.
3. ture/false의 메모리는 1byte이다
====================================
*/

int main(){
    int num= 10;
    int i= 0;

    cout<<"true  : "<<true<<endl;
    cout<<"false : "<<false<<endl;

    while (true){
        cout << i++ <<" ";
        if (i>=num){
            cout<<endl;
            break;
        
        }
    }
    cout<<"size of 1     : "<<sizeof(1)<<endl;
    cout<<"size of 0     : "<<sizeof(0)<<endl;
    cout<<"size of true  : "<<sizeof(true)<<endl;
    cout<<"size of false : "<<sizeof(false)<<endl;


    return 0;
}
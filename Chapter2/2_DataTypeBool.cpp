#include <iostream>

using namespace std;

bool isType(int num){
    if (num<=0){
        return false;
    }else{
        return true;
    }
}

int main(){
    bool a1;
    int num = 0;

    cout<<"Input Number : ";
    cin>>num;

    a1 = isType(num);
    if (a1){
        cout<<"Positive Num"<<endl;
    }else{
        cout<<"Negative Num"<<endl;
    }


    return 0;
}
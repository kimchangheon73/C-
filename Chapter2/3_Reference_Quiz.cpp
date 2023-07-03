#include <iostream>

using namespace std;

void mission1(int &number){
    number = number + 1;
}

void mission2(int &number){
    number = (-1) * number;
}


void SwapPointer(int *ptr1, int *ptr2 ){
    int temp = *ptr1;

    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void mission3(){
    
    int num1 = 5;
    int *ptr1 = &num1;

    int num2 = 10;
    int *ptr2 = &num2;

    cout<<"ptr1 : "<<*ptr1<<endl;
    cout<<"ptr2 : "<<*ptr2<<endl;

    int *(&rptr1) = ptr1;
    int *(&rptr2) = ptr2;

    SwapPointer(*(&rptr1), *(&rptr2));
    cout<<"ptr1 : "<<*ptr1<<endl;
    cout<<"ptr2 : "<<*ptr2<<endl;

}



int main(){
    mission3();
    return 0;
}
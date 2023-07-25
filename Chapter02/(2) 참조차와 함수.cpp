/* (1) 참조자를 이용한 Call-by-reference */
#include <iostream>
void SwapByRef2(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void Ref_one(){
    int val1 = 10;
    int val2 = 20;
    SwapByRef2(val1, val2);
    std::cout<<"val1 = "<<val1<<std::endl;
    std::cout<<"val2 = "<<val2<<std::endl;
}




/*(2) Const 참조자 */


int main(){
    int num1 = 20;
    const int &num2 = num1;

    num2 = 40;
}
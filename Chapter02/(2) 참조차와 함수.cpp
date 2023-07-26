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




/*(2) Const 참조자 
    - 참조자를 이용한 값의 변경을 허용하지 않음*/
void example_2(){
    int num1 = 20;
    const int &num2 = num1; }




/* (3) 반환형이 참조, 반환도 참조 일때 */
int &RefFunc_3(int &ref){
    ref++;
    return ref;
}

int example_3(){
    int num1 =1 ;
    int &num2 = RefFunc_3(num1);
    num1++;
    num2++;
    std::cout<<num1<<std::endl; // 4
    std::cout<<num2<<std::endl; // 4
}




/* (4) 반환형은 참조, 반환은 변수 일때 */
int &RefFunc_4(int &ref){
    ref++;
    return ref;
}

int example_4(){
    int num1 = 1;
    int num2 = RefFunc_4(num1);
    num1 += 1;
    num2 += 100;
    std::cout<<num1<<std::endl;     // 3
    std::cout<<num2<<std::endl;     // 102
}




/* (5) 참조를 대상으로 값을 반환하는 경우 */
int RefFunc_5(int &ref){
    ref ++;
    return ref;
}

int example_5(){
    int num1 = 1;
    int num2 = RefFunc_5(num1);

    num1 += 1;
    num2 += 100;
    std::cout<<num1<<std::endl;     // 3
    std::cout<<num2<<std::endl;     // 102
}


/* ==========  결론  ==========
- 참조자를 반환하건, 변수에 저장된 값을 반환하건, 반환형이 참조형이 아니라면 차이가 없다.
- 하지만, 반환형이 값의 형태라면, 참조자로 값을 받을 수 없다.
*/


int main(){
    example_5();
    return 0;
}
/* (1) new * delete 
- new    : malloc를 대안하는 메모리의 동적 할당 방법 --> 크기를 바이트 단위로 계산하지 않아도 된다.
- delete : free를 대신하는 메모리 해제 방법

new 연산자로 할당된 메모리의 공간은  반드시 delete를 사용해 소멸해야 한다. */

// int example_1(){
//     int *ptr1 = new int;            // int형 변수의 할당
//     double *ptr2 = new double;      // double형 변수의 할당
    
//     int *arr1 = new int[3];         // 길이가 3인 int형 배열의 할당
//     double *arr2 = new double[3];   // 길이가 7인 double형 배열의 할당

//     delete ptr1;
//     delete ptr2;
//     delete []arr1;
//     delete []arr2;
// }




/* (2) 포인터를 사용하지 않고 힙에 접근하기 
-> 변수의 성향을 지니는 (값의 변경이 가능한) 대상에 대해서는 참조자의 선언이 가능하다 */
#include <iostream>

void example_2(){
    int *ptr = new int;
    int &ref = *ptr;    // 힙 영역에 할당된 변수에 대한 참조자 선언
    ref = 20;

    std::cout<<*ptr<<std::endl;
    std::cout<<ref<<std::endl;
}

int main(){
    example_2();
    return 0;
}
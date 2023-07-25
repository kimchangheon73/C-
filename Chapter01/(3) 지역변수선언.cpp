/*  C++의 지역변수 선언

-------------다음 코드를 통해 확인한 사실--------------- 
1. std::cin의 다중 입력     입력되는 데이터의 구분은 공백을 통해 이뤄진다.              
2. for문 내 변수 선언       for문 내에서 변수의 선언이 가능하다
-------------------------------------------------------

*/

#include <iostream>

int main(){

    int val1, val2;
    int result = 0;

    std::cout<<"Enter the Two number = ";
    std::cin>>val1>>val2;   

    if (val1 < val2){
        for (int i = val1+1 ; i<val2 ; i++){
            result += i;
        }
    }
    else{
        for (int i = val2+1 ; i<val1 ; i++){
            result += i;
        }
    }

    std::cout<<"Add of Range(val1, val2) = "<<result<<std::endl;
    return 0;
}
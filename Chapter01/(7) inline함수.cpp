/*
매크로 함수의 장점과 함수의 inline선언
    매크로 함수 '장점' : 코드 성능의 향상
    매크로 함수 '단점' : 복잡한 코드의 구현 한계 

inline 함수 
    - 매크로 함수의 장점은 취하고 단점을 극복한 c++의 함수
    - 컴파일러에 의해 처리되는 함수
    - inline 선언 여부에 상관없이 될수도 안될수도 있음

inline 함수의 특징
    - 자료형에 독립적이지 않아 데이터 손실 발생 가능성이 있음
    - 이러한 경우엔 Templete을 이용헤 극복이 가능
*/

#include <iostream>

// 매크로 함수 
#define SQUARE(X) ((X)*(X))

// 일반적인 inline함수
inline int square(int x){
    return x*x;
}
// 자료형에 독립적인 inline 함수
template <typename T>
inline T square_t(T x){
    return x*x;
}



int main(){
    std::cout<<SQUARE(5.5)<<std::endl;    // 매크로 함수를 이용한 결과
    std::cout<<square(5.5)<<std::endl;    // inline 함수를 이용한 결과
    std::cout<<square_t(5.5)<<std::endl;    // inline 함수를 이용한 결과

}
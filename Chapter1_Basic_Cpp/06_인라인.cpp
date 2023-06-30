
# include <iostream>

// ================================
// inline함수 
// --> 프로그램 코드라인 안으로 들어가 버린 함수
// --> 함수의 몸체가 함수의 호출문을 대신하는 것

// 매크로 함수 특징
// --> 자료형에 의존하지 않아 데이터의 손실이 없음

// liline 람수 특징
// --> 자료형에 의존하여 데이터의 손실이 발생
// --> 대이터 손실 문제를 해결하기 위해 templete 을 이용한다
// ================================

# define Square(x) ((x)*(x)) // 매크로 함수 정의 

// C++기반의 인라인 함수 정의
inline int Square_cpp(int x){
    return x*x;
}

// 템플릿을 이용한 liline 함수 정의
template <typename T>
inline T Square_cpp_temp(T x){
    return x*x;
}

int main(){
    std::cout<<Square(5.5)<<std::endl;
    std::cout<<Square_cpp(5.5)<<std::endl;
    std::cout<<Square_cpp_temp(5.5)<<std::endl;

    return 0;
}

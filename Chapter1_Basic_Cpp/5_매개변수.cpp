#include <iostream>

// ============= 핵심 =============
// 1. 디폴트 값 : 기본적으로 설정되어 있는 값으로 입력이 들어오지 않았을 때 기본적으로 사용하는 값을 의미한다
// 2. 디폴트 값은 부분적으로 지정이 가능하다.
// 3. 매개변수는 왼쪽부터 값이 채워지기 때문에 오른쪽 값부터 채워져서 정의해야 한다
// ================================

int BoxVolumne(int length, int width=1, int height=1){
    return length * width * height;
};


int main(){
    int result1 = BoxVolumne(3,3,3);
    int result2 = BoxVolumne(3,3);
    int result3 = BoxVolumne(3);
 // int result4 = BoxVolumne();  --> 에러발생 
    
    std::cout<<"3,3,3 ->"<<result1<<std::endl; 
    std::cout<<"3,3   ->"<<result2<<std::endl; 
    std::cout<<"3     ->"<<result3<<std::endl; 

    return 1;
}




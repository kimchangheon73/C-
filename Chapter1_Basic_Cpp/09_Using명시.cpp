#include <iostream>

// ============= 핵심 =============
// Using을 이용해서 공간 지정 연산자(::)을 사용하지 않고 직접 호출이 가능하다
// Using Namespace::함수명;
// --> 함수명(); 으로 직접 호출이 가능!

// Using namespze std --> std 공간 내 모든 함수를 직접 호출하겠다
// ================================

using namespace std;

namespace Hybrid{
    void HyFunc(){
        cout<<"So Simple function!"<<endl;
        cout<<"In namespace Hybrid!"<<endl;
    }
}

int main(){
    using Hybrid::HyFunc;
    HyFunc();
}
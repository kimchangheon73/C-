# include <iostream>
using namespace std;
// =========== 핵심 정리 ===========
// 지역변수와 전연변수의 이름이 동일하다면 전역변수는 지역변수에 의해 가려진다.
// 이를 해결하기 위한 방법!
// "::전역변수"을 사용하여 전역변수의 직접 접근하여 사용한다! 

int val = 50;

void SimpleFunc(){
    int val = 20;
    cout<<"Global val = "<<::val<<endl;
    cout<<"Member val = "<<val<<endl;

}
int main(){
    SimpleFunc();
    return 0;
}
#include <iostream>

/*(1) 이름 공간의 기본 원리
        - 여러 작업을 한번에 할 때 충돌을 막기 위해 고안된 공간
        - 존재하는 이름공간이 다르면 동일한 이름의 변수와 함수를 선언이 가능하다*/

namespace ABC{ void Func(){ std::cout<<"ABC Func"<<std::endl; }}
namespace DEF{ void Func(){ std::cout<<"DEF Func"<<std::endl; }}





/*(2) 이름공간 기반의 함수 선언과 정의 분리*/
namespace BestCom{ void Func(); }
namespace ProcCom{ void Func(); }

void BestCom::Func(){ std::cout<<"BestCom Func"<<std::endl;}
void ProcCom::Func(){ std::cout<<"ProcCom Func"<<std::endl;}





/* (3) 동일한 이름 공간 내의 함수 호출 */
namespace Space{ void Func_one(); }
namespace Space{ void Func_two(); }

void Space::Func_one(){
    std::cout<<"Space of Func_one"<<std::endl; 
    Func_two();}

void Space::Func_two(){
    std::cout<<"Space of Func_two"<<std::endl;}





/* (4) 이름 공간의 중첩 --> 이름 공간은 중첩이 가능하며 계층 적 구조를 가진다 */
namespace Parent{
    int num = 2;
    namespace Subone{ int num = 3; }
    namespace Subtwo{ int num = 5; }}





/* (5) Using을 이용한 이름공간 명시
      - 간편하지만 사용에 있어서 주의가 필요함 
      - 해당 이름 공간의 명시 없이 매서드, 변수의 직접 호출이 가능 */
using namespace std;

void UsingFunc(){
    cout<<"Using std cout - endl"<<endl;
}





/* (6) 이름공간의 별칭 지정과 전역변수 접근 */
namespace AAA {namespace BBB { namespace CCC { int num1, num2; }}}
namespace Alias_ABC = AAA::BBB::CCC;

void Alias(){
    Alias_ABC::num1 = 10;
    Alias_ABC::num2 = 20;

    cout<<Alias_ABC::num1<<endl;
    cout<<Alias_ABC::num2<<endl;
}





int main(){
    ABC::Func();
    DEF::Func();

    // 계층적 이름공간 확인
    std::cout<<Parent::num<<std::endl;
    std::cout<<Parent::Subone::num<<std::endl;
    std::cout<<Parent::Subtwo::num<<std::endl;

    // 별칭을 이용한 이름공간 확인
    Alias();

    return 0;

}
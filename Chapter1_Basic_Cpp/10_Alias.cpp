# include <iostream>
using namespace std;

// ============= 핵심 =============
// Ailas = 깊은 이름공간의 효율적인 사용을 위한 방법
// namespace 별칭 = 사용할 이름 공간
// ================================

namespace GrandMother{
    namespace Father{
        namespace Son{
            char name1[] = "Hong gil ddong";
            char name2[] = "Dullee";
        }
    }
}


int main(){
    namespace GFS = GrandMother::Father::Son;
    cout<<"Name1 = "<<GFS::name1<<endl;
    cout<<"Name2 = "<<GFS::name2<<endl;

    return 0;   
}
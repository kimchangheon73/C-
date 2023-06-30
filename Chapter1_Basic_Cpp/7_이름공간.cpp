#include <iostream>

// 이름공간은 이용하면 동일한 이름의 함수를 생성할 수 있다 ~
namespace Hello_one{
    void HelloWorld(){
        std::cout<<"Hello Wolrd One"<<std::endl;
    }
}

namespace Hello_two{
    void HelloWorld(){
        std::cout<<"Hello Wolrd Two"<<std::endl;
    }
}

// 이름 공간 중첩 
namespace Parent{
    int num = 2;

    namespace child1{
        int num = 3;
    }

    namespace child2{
        int num = 4;
    }
}

int main(){
    Hello_one::HelloWorld();
    Hello_two::HelloWorld();

    std::cout<<Parent::child1::num<<std::endl;
    std::cout<<Parent::child2::num<<std::endl;


    return 0;
}
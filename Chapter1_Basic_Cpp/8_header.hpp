
// =========== 파일의 분할  ===========
// 해더파일  : 메인 함수를 제외하고 사용할 함수를 선언하는 파일
// 소스파일1 : 사용할 함수의 기능을 정의하는 파일
// 소스파일2 : 메인함수만을 적시한 파일

// 사용할 함수만을 선언
namespace BestComImpl{
    void SimpleFunc();
}

namespace ProgComImpl{
    void SimpleFunc();
}
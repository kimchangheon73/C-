#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>

using namespace std;

// 1. 다음 함수를 최소 1회 사용해보자
// - strlen (문자열 길이 계산)
// - strcat (문자열 뒤에 덧붙이기)
// - strcpy (문자열 복사)
// - strcmp (문자열 비교)
void Use_strlib(){
    char *str1 = "Hi";  // str포인터 변수명은 그 자체로서는 전체 문자열을 출력하고 int로 변환한 포인터 변수명은 주소 값을 나타낸다
    char *str2 = "C++"; 
    char str3[50];

    cout<<str1<<endl;
    cout<<*str1<<endl;

    cout<<"str1 length : "<<strlen(str1)<<endl;
    cout<<"str2 length : "<<strlen(str2)<<endl;

    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);

    cout<<"Full Sentence : "<<str3<<endl;

    if (strcmp(str1, str2) != 0){
        cout<<"Not Equal"<<endl;
    }else{
        cout<<"Same Equal"<<endl;
    }

}


// 2. 1~100 사이의 난수 생성 문제
void RandNum(){
    srand(time(NULL)); // Seed값 부여 지정
    for (int i=0; i<5; i++){
        cout<<"Random Num : "<<rand()%100<<endl;;
    }
}

int main(){
    
    Use_strlib();
    RandNum();

    return 0;
}

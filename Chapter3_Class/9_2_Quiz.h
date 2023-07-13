/* 문제 2
문자열 정보를 저장하는 Printer 클래스를 생성하라
    - 기능 1 : 문자열 저장
    - 기능 2 : 문자열 출력
*/

#ifndef __9_2_QUIZ_H__
#define __9_2_QUIZ_H__
#include <iostream>

using namespace std;

class Printer{
    private:
        char *strings;

    public:
        void SetString(char *msg){
            Printer::strings = msg;
        }
        void ShowString(){
            cout<<Printer::strings<<endl;
        }
};

#endif
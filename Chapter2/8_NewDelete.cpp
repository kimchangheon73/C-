#include <iostream>
#include <string.h>

using namespace std;

char *MakestrAdr(int len){
    // char *str = (char*)malloc(sizeof(char)*len);
    char *str = new char[len];      // new는 메모리를 만들고 주소를 반환하는 키워드
    return str;
}

int main(){
    char *str = MakestrAdr(20);
    strcpy(str, "i am so happy!");
    cout<<str<<endl;
    cout<<sizeof(str)<<endl;
    
    // free(str);
    delete []str;

    return 0;
}

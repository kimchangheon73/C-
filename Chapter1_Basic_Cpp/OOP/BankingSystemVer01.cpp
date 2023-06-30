#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithrawMoney(void);
void ShowAllAccInfo(void);

enum menu_type {MAKE =1, DEPOSIT, WITHRAW, INQUIRE, EXIT};

typedef struct 
{ // typedef : 타입의 별칭을 생성하고, 실제 타입 대신 별칭을 사용하는 것
    int accID;
    int balance;
    char cusName[NAME_LEN];
} Account ;

Account accArr[100];
int accNum = 0;
int choice;

int main(){

    while(true){
        cout<<endl;
        ShowMenu();
        cout<<"Enter: ";
        cin>>choice;
        cout<<endl;

        switch(choice){
            case menu_type::MAKE:
                MakeAccount();
                break;
            case menu_type::DEPOSIT:
                DepositMoney();
                break;
            case menu_type::WITHRAW:
                WithrawMoney();
                break;
            case menu_type::INQUIRE:
                ShowAllAccInfo();
                break;
            case menu_type::EXIT:
                return 0;
            default:
                cout<<"Illegal selection.."<<endl;
        }
    }
    return 0;
}

void ShowMenu(){
    cout<<"-----Menu"<<endl;
    cout<<"1. Make Account"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withraw"<<endl;
    cout<<"4. Show all info"<<endl;
    cout<<"5. EXit"<<endl;
}

void MakeAccount(){
    int acountID;
    char name[NAME_LEN] = "None";
    int deposit_money;

    cout<<"[Make Account]"<<endl;
    cout<<"Account ID: ";
    cin>>acountID;
    cout<<"Account Name: ";
    cin>>name;
    cout<<"Deposit Money: ";
    cin>>deposit_money;

    accArr[accNum].accID = acountID;    // 배열의 accNum번째 멤버변수로 접근 ( "::" = 범위지정 연산자, "." = 멤버변수 접근 연산자 ) 
    accArr[accNum].balance = deposit_money;
    strcpy(accArr[accNum].cusName, name);   // strcpy : 대상 문자열 전체를 복사한다.
    accNum ++;
}

void DepositMoney(){
    int money;
    int id;
    bool Find_id = false;
    
    cout<<"[Deposit]"<<endl;
    cout<<"Account ID: ";
    cin>>id;
    cout<<"Deposit Money: ";
    cin>>money;
    
    for (int i=0; i<accNum; i++){
        if (accArr[i].accID == id){
            Find_id = true;
            accArr[i].balance += money;
            break;
        }
    }

    if (Find_id == true){
        cout<<"Deposit Complete!"<<endl;
    }else{
        cout<<"Deposit Failture(can't search)"<<endl;
    }
}

void WithrawMoney(){
    int money;
    int id;
    bool Find_id = false;
    
    cout<<"[Withraw]"<<endl;
    cout<<"Account ID: ";
    cin>>id;
    cout<<"Withraw Money: ";
    cin>>money;
    
    for (int i=0; i<::accNum; i++){
        if (accArr[i].accID == id){
            Find_id = true;
            if (accArr[i].balance < money){
                cout<<"Not enought money"<<endl;
                break;
            }else{
                accArr[i].balance -= money;
                cout<<"Balance: "<<accArr[i].balance<<endl;
                break;
            }
        }
    }

}

void ShowAllAccInfo(){
    for(int i=0; i<::accNum; i++){
        cout<<"Account ID: "<<accArr[i].accID<<endl;
        cout<<"Account Name : "<<accArr[i].cusName<<endl;
        cout<<"Balance: "<<accArr[i].balance<<endl<<endl;
    }
}

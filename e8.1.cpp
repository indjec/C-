#include<iostream>
using namespace std;
class account{
    protected:
    char name[30];
    int acc_num;
    int acc_type;
    int balance;
    public:
    void deposit(int);
    void withdraw(int);
    void penalty(void);
    void display(void);
};
void account::deposit(int a){
    balance=a;
}
void account::display(){
    cout<<"Current balance:Rs. "<<balance<<"\n";
}
void account::withdraw(int w){
    balance=balance-w;
    cout<<"Withdrawal amount:Rs. "<<w<<"\n";
    cout<<"Balance after withdrawal:Rs. "<<balance<<"\n";
}
void account::penalty(){
    if(balance<5000){
        cout<<"Your balance is less thaan 4000,Penalty imposed \n";
        balance=balance-100;    //say a penaly of 100 rupees is imposed
        cout<<"Balance after penalty:Rs. "<<balance<<"\n";
    }
    else
    cout<<"No penalty imposed.\n";
    
}
class cur_acc:public account{
    protected:
    int ci;
    public:
    void comp_int(){
        ci=balance+balance;       //say the amount doubles after applying comp_int
    }
};
class sav_acc:public account{
    public:
    void faci(){
    cout<< "No compound interest \n";
    }
};
int main(){
    cur_acc person1;
    sav_acc person2;
    int x;
    cout<<"Enter account type: \n";
    cout<<"1. Current account: \n";
    cout<<"2. Saving account: \n";
    cin>>x;
    // switch(x){
    //     case 1:person1.deposit(2000);
    //            person1.withdraw(500);
    //            person1.penalty();
    //            person1.comp_int();
    //            break;
    //     case 2:person2.deposit(5000);
    //            person2.withdraw(1000);
    //            person2.display();
    //            person2.faci();
    //            break;
    // }
    if(x == 1){
        
        person1.deposit(2000);
        person1.display();
        person1.withdraw(500);
        person1.penalty();
        person1.comp_int();
    }
    if(x == 2){
        person2.deposit(5000);
        person2.display();
        person2.withdraw(1000);
        person2.faci();
        person2.penalty();
    }
}
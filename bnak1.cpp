#include <iostream>
using namespace std;
class bank
{
    char name[30];
    int AccNo;
    int balance;

  public:
    // void getdata(void){
    //     cout<<"Enter name: ";
    //     cin>>name;
    //     cout<<"Enter initial amount: ";
    //     cin>>balance;
    // }
    void initial(void)
    {
        int x;
        cout << "Enter your initial balance is:";
        cin >> x;
        balance = x;
    }
    void deposite(void)
    {
        int d;
        cout << "Enter the amount to be deposited: ";
        cin >> d;
        balance = balance + d;
    }
    void withdraw(void)
    {
        int w;
        cout << "Enter the amount to withdraw: ";
        cin >> w;
        balance = balance - w;
    }
    void display(void)
    {
        cout << "Account balance: " << balance;
    }
    void outdata(void)
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Name of the person is:" << name;
    }
};
//const number=3;
int main()
{
    bank person;
    int z;
    do
    {
        cout << "\nSelect the task you want to perform: \n";
        cout << "1.Enter your initial balance: ";
        cout << "\n2.Deposite balance: ";
        cout << "\n3.Withdraw balance: ";
        cout << "\n4.Name of the person: \n";
        cin >> z;
        switch (z)
        {
        case 1:
        {
            person.initial();
            person.display();
            break;
        }
        case 2:
        {
            person.deposite();
            person.display();
            break;
        }
        case 3:
        {
            person.withdraw();
            person.display();
            break;
        }
        case 4:
            person.outdata();
        case 5:
            break;
        case 6:
            bank person
            cout << "Enter your Name:";
            cin >> name;
            cout << "Enter your AccNo:";
            cin >> AccNo;
            cout << "Enter your Balance:";
            cin >> balance;

        default:
            cout << "Wrong input";
        }
    } while (z != 5);
}
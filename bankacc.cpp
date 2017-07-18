#include <iostream>
using namespace std;
class account
{
    char name[30];
    int acc_no;
    int acc_type;

  public:
    void get_details()
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter account type: \n";
        cout << "1. Current \n";
        cout << "2. Savings \n";
        cin >> acc_type;
        cout << "Enter account number: \n";
        cin >> acc_no;
    }
    void put_details()
    {
        cout << "Your name is:" << name << "\n";
        cout << "Your account type is:" << acc_type << "\n";
        cout << "Your account number:" << acc_no << "\n";
    }
};
class cur_acc : public account
{
  public:
    void faci()
    {
        cout << "Compund interest available: \n";
    }
};
class sav_acc : public account
{
  public:
    void faci()
    {
        cout << "No compund interest facilities available: \n";
    }
};
const int m = 2;
int main()
{
    cur_acc person[m];
    for (int i = 0; i < m; i++)
    {
        person[i].get_details();
    }
    for (int i = 0; i < m; i++)
    {
        person[i].put_details();
    }
}
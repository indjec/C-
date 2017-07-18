#include <iostream>
using namespace std;
const int m = 30;
class person
{
  protected:
    char name[m];
    int code;

  public:
    void get_details()
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter code:";
        cin >> code;
    }
};

class account : public virtual person
{
    protected:
    int pay;

  public:
    void get_pay()
    {
        cout << "Enter your payment:";
        cin >> pay;
    }
};
class admin : public virtual person
{
    protected:
    char expe[m];

  public:
    void get_exp()
    {
        cout << "Enter your experience:";
        cin >> expe;
    }
};
class master : public account, public admin
{
  public:
    void display()
    {
        cout << "Your name is : " << name << "\n";
        cout << "Your code is: " << code << "\n";
        cout << "Your payent is: " << pay << "\n";
        cout << "Your experience is: " << expe << "\n";
    }
};
int main()
{
    master man;
    man.get_details();
    man.get_pay();
    man.get_exp();
    man.display();
}
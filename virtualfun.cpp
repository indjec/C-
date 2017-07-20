#include <iostream>
using namespace std;
class base
{
  public:
    void display()
    {
        cout << "This is base class";
    }
    virtual void show()
    {
        cout << "This is base class";
    }
};
class derived : public base
{
  public:
    void display()
    {
        cout << "This is base class";
    }
    virtual void show()
    {
        cout << "This is base class";
    }
};
int main()
{
    base B;
    derived D;
    base *ptr;

    cout << "ptr points to Base \n" ptr = &B;
    ptr=&B;
    ptr->display();
    ptr->show();

    cout<<"ptr points to derived. \n";
    ptr=&D;
    ptr->display();
    ptr->show();

}
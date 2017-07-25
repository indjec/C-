#include <iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class start
{
    char name[30];
    int code;
    float cost;

  public:
    void get_data(char *n, int c, float o)
    {
        strcpy(name,n);
        code = c;
        cost = o;
    }
    void display()
    {
        cout.precision(2);
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::showpoint);
        cout.setf(ios::left, ios::adjustfield);
        cout << setw(40) << name << code;
        cout.setf(ios::right, ios::adjustfield);
        cout << setw(15) << cost << endl;
    }
};
int main()
{
    start a[5];
    a[0].get_data("Turbo C++", 1001, 250.95);
    a[1].get_data("C primer", 905, 95.7);
    a[2].get_data("algorithm", 1111, 120.5);
    a[3].get_data("terminal", 2220, 150.85);
    a[4].get_data("netbeans", 6666, 145.00);
    cout << setw(10) << "NAME" << setw(34) << "CODE" << setw(15) << "COST" << endl;
    for (int i = 0; i < 60; i++)
        cout << "-";
    cout << endl;
    for (int i = 0; i < 5; i++)
        a[i].display();
    return 0;
}
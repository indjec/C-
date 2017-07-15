#include <iostream>
using namespace std;
class complex
{
    int x, y;

  public:
    complex() {}
    complex(float a)
    {
        x = y = a;
    }
    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }
    friend complex sum(complex, complex);
    friend void show(complex);
};
complex sum(complex c1, complex c2)
{
    complex c3;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return (c3);
}
void show(complex c)
{
    cout << c.x << " +j" << c.y << "\n";
}
int main()
{
    complex c1(2.3,5.4);
    complex c2(3.3,4.4);
    complex c;
    c=sum(c1,c2);
    cout<<"C1 =";show(c1);
    cout<<"C2 =";show(c2);
    cout<<"Sum =";show(c);
}
#include <iostream>
using namespace std;
//const int n=10;
// class student
// {
//   protected:
//     int roll[n];

//   public:
//     void get_num(void);
//     //void put_num(void);
// };
// void student::get_num()
// {
//     for(int j=0;j<n;j++)
// }
// void student::put_num()
// {
//     cout << "ROoll number: " << roll << "\n";
// }
class test
{
  protected:
    float s1;
    float s2;

  public:
    void get_mark(void);
    void put_mark(void);
};
void test::get_mark()
{
    cout <<"Enter mark obtained in sub1 and sub2:";
    cin >> s1;
    cin >> s2;
}
void test::put_mark()
{
    cout << "Marks in sub1:" << s1 << "\n";
    cout << "Marks in sub2:" << s2 << "\n";
}
class result : public test
{
    float total;

  public:
    void display(void);
};
void result::display()
{
    total = s1 + s2;
   // put_num();
    put_mark();
    cout << "Total: " << total << "\n";
}
const int m = 10;
int main()
{
    result student[m];
    for (int i = 0; i < m; i++)
    {
        //cout<<"Result of student "<<i+1<<"\n";
        cout<<"Result of roll number :"<<i+1<<"\n";
        //student[i].get_num();
        student[i].get_mark();
        //student[i].put_mark();
        student[i].display();
    }
    return 0;
}
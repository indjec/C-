#include <iostream>
using namespace std;
struct student
{
    int rollno;
    char sex;
} anil;
int main()
{
    student sunil;
    sunil.rollno=01;
    sunil.sex='m';
    cout<<sunil.rollno<<endl<<sunil.sex<<endl;
    return 0;
}
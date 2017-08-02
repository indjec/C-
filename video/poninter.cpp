#include <iostream>
using namespace std;
struct student
{
    int rollno;
    int age;
};
void point(student *indra);
int main(){
    student jit;
    cout<<"Enter age and roll no: ";
    cin>>jit.rollno;
    cin>>jit.age;
    point(&jit);
}
void point(student *indra){
    cout<<indra->rollno<<endl;
    cout<<indra->age<<endl;
    indra->rollno=9;
}
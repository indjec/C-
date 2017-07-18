#include<iostream>
using namespace std;
int main(){
    int a=30;
    int *ptr;
    ptr=&a;
    cout<<"The value of a is: "<<*ptr<<"\n";

    *ptr=*ptr+a;
    cout<<"\n The revised value of a is: "<<*ptr;
}
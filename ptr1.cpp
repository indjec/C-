#include<iostream>
using namespace std;
int main(){
    int a=10,*ptr,**ptr1;
    ptr=&a;
    ptr1=&ptr;
    cout<<"The address of a :"<<ptr<<"\n";
    cout<<"The address of ptr :"<<ptr1<<"\n";
    cout<<"After incrementing the adress value \n";
    ptr+=2;
    cout<<"The address of a :"<<ptr<<"\n";
    ptr1+=2;
    cout<<"The address of ptr :"<<ptr1<<"\n";
    
}
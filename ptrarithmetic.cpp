#include<iostream>
using namespace std;
int main(){
    int num[]={10,20,30,40,50,60};
    int *ptr;
    cout<<"The reqd. array is:\n";
    for(int i=0;i<6;i++){
        cout<<num[i];
        cout<<"\n";
    }
    ptr=num;
    cout<<"The value of ptr: "<<*ptr<<"\n";
    ptr++;
    cout<<"The value of ptr++: "<<*ptr<<"\n";
    ptr++;
    cout<<"The value of ptr++: "<<*ptr<<"\n";
    ptr-=2;
    cout<<"The value of ptr-=2: "<<*ptr<<"\n";
    ptr+=5;
    cout<<"The value of ptr+=5: "<<*ptr<<"\n";
    
}
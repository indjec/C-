#include<iostream>
//#include<conio.h>
using namespace std;
int main(){
    int *arr;
    int size;
    cout<<"Enter the size of the array: \n";
    cin>>size;
    cout<<"Creating an array of size "<<size;
    arr=new int (size);
    cout<<"\nDynamic allocation of the array arr is successfull";
    delete arr;



}
#include<iostream>
using namespace std;
int main(){
    int arr[10]={00,10,20,30,40,50,60,70,80,90};
    int *ptr,num;
    cout<<"Enter the number to search in the array: ";
    cin>>num;
    ptr=arr;
    for(int i=0;i<10;i++){
        if(*ptr==num){
            cout<<"\n"<<num<< " is present is the array";
            break;
        }
        else if(i == 9)
            cout<<"\n" <<num<< " is not present in the array.";
            ptr++;
        
    }
}
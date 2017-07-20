#include<iostream>
using namespace std;
int main(){
    int size=20;
    char name[size];

    cin.getline(name,size);
    cout.write(name,size);
}
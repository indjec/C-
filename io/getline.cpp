#include<iostream>
using namespace std;
int main(){
    int size=20;
    char name[size];

    cin.getline(name,size);  //IT WILL RECEIVE ONLY THE NUMBER OF CHARACTERS DECLARED IN SIZE,HERE FIRST 20
    cout.write(name,size);
}
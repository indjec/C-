#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("new3.txt", ios :: out | ios :: trunc);
    if(!file.is_open()){
        cout<<"Error while opening file";
    }
    else{
        cout<<"File open succcessfully";
        file<<"Here is a new file\n";
        file<<"Successfully file edited";
        file.close();
    }
}
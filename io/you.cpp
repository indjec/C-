#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("io.txt",ios :: in | ios :: out | ios :: trunc);
    if(!file.is_open()){
        cout<<"Error while opening file";
    }
    else{
        cout<<"File openend successfully";
        file<<"Hi!";
        file.close();
    }
    return 0;
}
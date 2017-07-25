#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    string s2("New");
    string s3("Delhi");
    s1=s2;
    cout<<"S1="<<s1<<"\n";
     string s4(s2);
     cout<<"S2="<<s2<<"\n";
     cout<<"S4="<<s4<<"\n";
     //now string1
     s1=s2+s3;
         cout<<"S1="<< s1 <<"\n";


}
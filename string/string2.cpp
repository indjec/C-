#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1("12345");
    string s2("abcde");
    cout<<"Original strings: \n";
    cout<<"S1= "<<s1<<"\n";
    cout<<"S2= "<<s2<<"\n";

    //Inserting a string in another string
    cout<<"Place s2 in s1 \n";
    s1.insert(2,s2);
    cout<<"Modified S1= "<<s1<<"\n";

    //Removing characters in a string
    cout<<"Remove 5 charcters from S1 \n";
    s1.erase(2,5);
    cout<<"Now s1= "<<s1<<"\n";

    //Replacing characters in a string
    cout<<"Replace middle characeters= \n";
    s2.replace(1,4,s1);
    cout<<"Now S2= "<<s2<<"\n";
}

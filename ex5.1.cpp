#include<iostream>
using namespace std;
class item{
    int num;
    float cost;
    public:
    item (int a,float b){
        num=a;
        cost=b;
    }
    void display(){
        cout<<"Number:"<<num<<"\n";
        cout<<"Cost:"<<cost<<"\n";
    }
};
int main(){
    item num1(100,23.6);
    num1.display();
}
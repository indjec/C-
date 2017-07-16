#include<iostream>
using namespace std;
class M{
    public:
    void display(){
        cout<<"Class M \n";
    }
};
class P:public M{
    public: 
    void display(){
        cout<<"Class N \n";
    }
};
int main(){
    P p;
    p.display();
    p.M::display();
}
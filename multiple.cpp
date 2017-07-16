#include<iostream>
using namespace std;
class M{
    protected:
    int m;
    public:
    void get_m(int);
};
void M::get_m(int a){
    m=a;
}
class N{
    protected:
    int n;
    public:
    void get_n(int);
};
void N::get_n(int b){
    n=b;
}
class P:public M,public N{
    public:
    void display(void);
};
void P::display(void){
    cout<<"m="<<m<<"\n";
    cout<<"n ="<<n<<"\n";
    cout<<"Sum ="<<m+n<<"\n";
}
int main(){
    P obj;
    obj.get_m(100);
    obj.get_n(200);
    obj.display();
}
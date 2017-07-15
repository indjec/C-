#include<iostream>
using namespace std;
class second;
class first{
    int num1;
    public:
    void input(int a){
        num1=a;
    }
    void display(void){
        cout<<num1<<"\n";
    }
    friend void swap(first &, second &);
};
class second{
    int num2;
    public:
    void input(int a){
        num2=a;
    }
    void display(void){
        cout<<num2<<"\n";
    }
    friend void swap(first &, second &);
};
void swap(first & x,second & y){
    int temp=x.num1;
    x.num1=y.num2;
    y.num2=temp;
}
int main(){
    first x;
    second y;
    int i,j;
    cout<<"Enter the two numbers:";
    cin>>i;
    cin>>j;
    x.input(i);
    y.input(j);
    cout<<"Number before swapping: ";
    x.display();
    y.display();
    swap(x,y);
    cout<<"Number after swapping: ";
    x.display();
    y.display();
    return 0;
}

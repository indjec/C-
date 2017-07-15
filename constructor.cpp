#include<iostream>
using namespace std;
class point{
    int x,y;
    public:
    point(int a,int b);
    void display(void){
        cout<<"("<<x<<","<<y<<")\n";
    }
};
point::point(int a,int b){
    x=a;
    y=b;
}
int main(){
    point p1(1,100);
    point p2(2,200);
    cout<<"Point p1= ";
    p1.display();
    cout<<"Point p2= ";
    p2.display();

}
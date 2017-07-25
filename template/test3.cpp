#include<iostream>
using namespace std;
template<class first, class second>
first greater(first a,second b){
    return (a>b?a:b);
}
int main(){
    int x=7;
    float y=98.6;
    
    cout<< greater(x,y) <<endl;
}
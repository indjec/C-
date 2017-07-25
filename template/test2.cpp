#include<iostream>
using namespace std;
template<class all>
all sum(all x,all y){
    return x+y;
}
int main(){
    float z;
    z=sum(7.5,6.9);
    cout<<z;
}
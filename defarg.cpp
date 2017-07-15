#include<iostream>
using namespace std;
int main(){
    float amount;
    float value(float p,int n,float rate=.75);
    amount=value(500,2);
    cout<<"Amount="<<amount;
}
float value(float a,int b, float c){
    float sum=a*b*c;
    return sum;

}
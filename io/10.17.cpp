#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    for(float i=0.25;i<=1.0;i++){
        cout.precision(5);
        cout.width(7);
        cout<<i;
        cout.width(10);
        cout<<i*i<<"\n";
    }
    cout<<setw(10)<<"TOTAL= ";
    cout<<setw(20)<<setprecision(2)<<1234.567;
    cout<<endl;
}
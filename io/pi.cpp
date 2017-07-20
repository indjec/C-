#include <iostream>
#include<unistd.h>
using namespace std;
int main()
{
    float pi = 22.0 / 7.0;
    int size;
    cout << "Enter the decimal limit: ";
    cin >> size;
    cout<<"The value of pi is: \n";
    for (int i=1;i<=10;i++)
    {
        cout.precision(i+1);
        std::cout<<pi<< std::flush;
        // cout<< pi <<"\n" ;
        sleep(1);
    }
}
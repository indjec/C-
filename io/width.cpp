#include <iostream>
using namespace std;
int main()
{
    int item[4] = {10, 8, 7, 6};
    int cost[4] = {100, 200, 300, 400};
    cout.width(5);
    cout << "ITMES";
    cout.width(8);
    cout << "COST";
    cout.width(15);
    cout << "TOTAL VALUE "
         << "\n";

    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        cout.width(5);
        cout<<item[i];

        cout.width(8);
        cout<<cost[i];

        int value=item[i]*cost[i];
        cout.width(15);
        cout<<value<<"\n";
        sum=sum+value;
    }
}
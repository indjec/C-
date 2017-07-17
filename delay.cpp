#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;
int main()
{
    int i;
     for (i = 0; i < 20; i++){
         cout<<".";
    }
    for(int j=0;j<10;j++){
        cout<<"\b\b";
        cout<<" ";
        sleep(1);
    }

}

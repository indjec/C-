// #include <iostream>
// #include <time.h>
// #include <unistd.h>
// using namespace std;
// int main()
// {
//     int i;
//      for (i = 0; i < 20; i++){
//          cout<<".";

//     }

//                      sleep(1);

// }
// #include<stdio.h>
#include<iostream>
#include<unistd.h>
#include<dos.h>
using namespace std;
 
int main()
{
   struct time t;
 
   gettime(&t);
 
   cout<<"Current system time is %d : %d : %d\n"<<t.ti_hour,t.ti_min,t.ti_sec<<"\n";
 
   return 0;
}
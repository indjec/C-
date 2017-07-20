#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
    for(int i=0;i<100;i++){
        std::cout << ".." << std::flush;
        std::cout << i << std::flush;
        
        std::cout << "\b\b" << std::flush;
        sleep(1);
    }
}
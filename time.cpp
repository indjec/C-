#include<iostream>
using namespace std;
class time{
    int hour;
    int minute;
    public:
    void gettime(int h, int m){
         minute=m;
         hour=h;
    }
    void disptime(void){
        cout<<hour<<"hours and";
        cout<<minute<<"minutes";
    }
    void sum(time x,time y){
        minute=x.minute+y.minute;
        hour=minute/60;
        minute=minute%60;
        hour=hour+x.hour+y.hour;
    }
};
int main(){
    time t1,t2,t3;

    t1.gettime(2,45);
    t2.gettime(3,45);

    t3.sum(t1,t2);

    cout<<"Total time: ";
    t3.disptime();
        return 0;
}


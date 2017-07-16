#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void get_roll(int a){
        roll=a;
    }
    void put_num(void){
        cout<<"Roll No: "<<roll<<"\n";
    }
};
class test:public student{
    protected:
    float part1,part2;
    public:
    void get_mark(float x,float y){
        part1=x;
        part2=y;
    }
    void put_mark(void){
        cout<<"Marks obtained: "<< "\n";
        cout<<"Part1: "<<part1<< "\n";
        cout<<"Part2: "<<part2<< "\n";
    }
};
class sports{
    protected:
    float score;
    public:
    void get_score(float a){
        score=a;
    }
    void put_score(void){
        cout<<"Sports wt:"<<score<<"\n";
    }
};
class result:public test,public sports{
    float total;
    public:
    void display(void);
};
void result::display(void){
    total=part1+part2+score;
    put_num();
    put_mark();
    put_score();
    cout<<"Total score: "<<total<<"\n";
}
int main(){
    result student;
    student.get_roll(12);
    student.get_mark(23,34);
    student.get_score(23.4);
    student.display();
}
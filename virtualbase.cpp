#include<iostream>
using namespace std;
class student{
    protected:
    int roll;
    public:
    void get_roll(int a){
        roll=a;
    }
    void put_roll(void){
        cout<<"Roll No:"<<roll<<"\n";
    }
};
class test:virtual public student{
    protected:
    float part1,part2;
    public:
    void get_marks(float x,float y){
        part1=x;
        part2=y;
    }
    void put_marks(void){
        cout<<"Marks obtained:"<<"\n";
        cout<<"Part1: "<<part1<<"\n";
        cout<<"Part2: "<<part2<<"\n";
    }
};
class sports:public virtual student{
    protected:
    float score;
    public:
    void get_score(float s){
        score=s;
    }
    void put_score(void){
        cout<<"Sports wt: "<<score<<"\n";
    }
};
class result:public test,public sports{
    float total;
    public:
    void display(void);
};
void result::display(){
    total=part1+part2+score;
    put_roll();
    put_marks();
    put_score();
    cout<<"Total score:"<<total<<"\n";
}
int main(){
    result student_1;
    student_1.get_roll(12);
    student_1.get_marks(23.8,32.9);
    student_1.get_score(7.8);
    student_1.display();
    return 0;
}
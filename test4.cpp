#include<iostream>
using namespace std;
class employee{
    int age;
    char name[30];
public:
   void getdata(void);
   void display(void);
};
void employee::getdata(void){
    cout<<"Enter name";
    cin>>name;
    cout<<"Enter age";
    cin>>age;
}
void employee::display(void){
    cout<<"Name: "<<name<<"\n";
    cout<<"Age: "<<age<<"\n";
}
const int size=3;
int main(){
    employee manager[size];
    for(int i=0;i<size;i++){
        cout<<"Details of manager"<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for(i=0;i<size;i++){
        cout<<"\nManager" <<i+1<<"\n";
        manager[i].display();
    }
}



#include<iostream>
using namespace std;
class student{
    int sub1,sub2;
    int roll;
    char name[30];
    public:
    student(void){
        sub1=30;
    }   
        void get_details(void){
        cout<<"ENter name: ";
        cin>>name;
        cout<<"Enter roll no: ";
        cin>>roll;
        cout<<"Enter marks in one subjects: ";
        cin>>sub2;
        
    }
    void put_details(student s1){
        cout<<"Name: "<<s1.name<<"\n";
        cout<<"Roll no:"<<s1.roll<<"\n";
        cout<<"Sub1:"<<s1.sub1<<"\n";
        cout<<"Sub2:"<<s1.sub2<<"\n";
        cout<<"Total:"<<s1.sub1+s1.sub2<<"\n";
    }
};
//     void total(student,student);
// };
// void student::total(student s1,student s2){
//     int total1,total2;
//         total1=s1.sub1+s1.sub2;
//         cout<<"TOTAL"<<total1<<"\n";
//         total1=s2.sub1+s2.sub2;
//         cout<<"TOTAL"<<total2<<"\n";
//         cout<<s1.sub1;
// }

// for(i=0;i<100<i++){
//     cout<< s1["sub"+i]
// }

const int m=3;
int main(){
    student S[m];
    student temp;
for(int i=0;i<m;i++){
    S[i].get_details();
    if(i==m-1){
       temp.put_details(S[i]);
    }
   // S2.get_details();
}
//    S3.put_details(S1);
  //  S3.put_details(S2);
//for(int i=0;i<m;i++){
    
   // S2.get_details();
//}
    // cout<<"SUB1: ";
    // S1.put_mark();
    // cout<<"SUB2: ";
    // S2.put_mark();
    
}
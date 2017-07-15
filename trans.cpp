#include<iostream>
using namespace std;
class matrix{
    int m[3][3];
    public:
    void read(void){
        int i,j;
        cout<<"Enter the elements:";
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                cin>>m[i][j];
            }
        }
    }
    void display(void){
        int i,j;
        for(i=0;i<3;i++){
              cout<<"\n";
            for(j=0;j<3;j++){
                cout<<m[i][j]<<"\t";
            }
        }cout<<"\n";
    }
    friend matrix trans(matrix);
};
matrix trans(matrix m1){
        matrix m2;
        int i,j;
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                m2.m[i][j]=m1.m[j][i];
            }
        }
	return(m2);
    }



int main(){
    matrix m1,m2;
    m1.read();
    cout<<"Original matrix: ";
    m1.display();
    cout<<"Transposed matrix: ";
    m2=trans(m1);
    m2.display();
}


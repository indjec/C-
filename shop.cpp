#include<iostream>
using namespace std;
const int m=50;
class items{
    int itemcode[m];
    float itemprice[m];
    int count;
    public:
    void CNT(void){count=0;}
    void getitem(void);
    void displaysum(void);
    void remove(void);
    void displayitem(void);
};
void items::getitem(void){
    cout<<"Enter the code:";
    cin>>itemcode[count];
    cout<<"Enter the price of items: ";
    cin>>itemprice[count];
    count++;
}
void items::displaysum(void){
    float sum=0;
    for(int i=0;i<count;i++){
        sum=sum+itemprice[i];
    }
    cout<<"Total price is:"<<sum<<"\n";
}
void items::remove(void){
    int x;
    cout<<"Ener the code:";
    cin>>x;
    for(int i=0;i<count;i++){
        if(itemcode[i]==x)
        itemprice[i]=0;
    }
}
void items::displayitem(void){
    cout<<"Code Price";
    for(int i=0;i<count;i++){
	cout<<"\n"<<itemcode[i];
        cout<<"	"<<itemprice[i];
    }
    cout<<"\n";
}
int main(){
    items order;
    order.CNT();
    int x;
    do{
        cout<<"\nYou can do the following-\n";
        cout<<"Enter your opinion:\n";
        cout<<"\n1:Add an item";
        cout<<"\n2:Sum all item";
        cout<<"\n3:Remove an item";
        cout<<"\n4:Display all item";
        cout<<"\n5:Quit\n";
        cin>>x;
        switch(x){
            case 1:order.getitem();
            break;
            case 2:order.displaysum();
            break;
            case 3:order.remove();
            break;
            case 4:order.displayitem();
            break;
            case 5:break;
            default:cout<<"Error in input";
        }
    }while(x!=5);
return 0;
}

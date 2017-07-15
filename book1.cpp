#include<iostream>
using namespace std;
class Room{
	int width;
	int height;
	static int copy;
public:
	Room(){
	width=12;
	height=8;
}
Room(Room& r){
	width=r.width;
	height=r.height;
	copy++;
}
void display(){
	cout<<copy;
}
};
int Room::copy=0;
int main(){
	Room obj1;
	Room obj2(obj1);
	Room obj3=obj1;
	Room obj4;
	obj4=obj3;
	obj4.display();
}

#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
};
int main()
{
	Number T1,T2;
	Number *p;
	p=&T1;
	T1.x=15;
	T1.y=20;
	T2.x=5;
	T2.y=10;
	cout<<p->x<<" "<<p->y<<endl;
	p=&T2;
	cout<<p->x<<" "<<p->y;


 	return 0;
}


#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void myfun(Number D1)
		{
			D1.x=10;
			D1.y=20;
		}
		
};
int main()
{
	Number T1;
	Number *p;
	p=&T1;
	p->x=5;
	p->y=15;
	p->myfun(T1);
	cout<<p->x<<" "<<p->y<<endl;

 	return 0;
}


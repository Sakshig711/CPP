#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void myfun(Number *p)
		{
			p->x=10;
			p->y=20;
		}
		
};
int main()
{
	Number T1;
	Number *p;
	p=&T1;
	p->x=5;
	p->y=15;
	p->myfun(&T1);
	cout<<p->x<<" "<<p->y<<endl;

 	return 0;
}


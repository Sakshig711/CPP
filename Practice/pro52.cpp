#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void scan()
		{
			cout<<"Enter x and y = ";
			cin>>x>>y;
		}
		
		void add(Number D1,Number D2)
		{
			x=D1.x+D2.x;
			y=D1.y+D2.y;
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	Number T1,T2,T3;
	Number *p,*q,*r;
	p=&T1;
	q=&T2;
	r=&T3;
	
	p->scan();
	q->scan();
	
	r->add(T1,T2);
	r->print();


 	return 0;
}


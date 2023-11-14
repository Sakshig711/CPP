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
	r->scan();
	
	p->print();
	q->print();
	r->print();

 	return 0;
}


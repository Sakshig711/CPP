#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		Number()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		Number(int a)
		{
			
		}
};
int main()
{
	Number *p,*q,*r;
	p = new Number();
	q = new Number();
	
	r = new Number(1);
	
	r->x=p->x+q->x;
	r->y=p->y+q->y;
	
	cout<<r->x<<" "<<r->y;
	


 	return 0;
}


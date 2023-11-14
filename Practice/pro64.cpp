#include<iostream>
using namespace std;
class Number
{
	public:
		int x;
		Number *ptr;
};
int main()
{
	Number T1,T2,T3;
	Number *p,*q,*r;
	p=new Number();
	q=new Number();
	r=new Number();
	
	p->x=10;
	q->x=20;
	r->x=30;
	
	p->ptr=q;
	q->ptr=r;
	r->ptr=NULL;
	
	cout<<p->x<<endl;
	cout<<p->ptr->x<<endl;
	cout<<p->ptr->ptr->x<<endl;
	
	cout<<p->ptr<<endl;
	cout<<p->ptr->ptr<<endl;
	
	
	
	


 	return 0;
}


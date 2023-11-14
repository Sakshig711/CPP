/*Q1.

Create 2 objects of Number.Scan and print thir data using pointer to object.
Do not add any member function.*/
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
	Number *p,*q;
	p=&T1;
	q=&T2;
	cout<<"Enter the x and y = ";
	cin>>p->x>>p->y;
	
	cout<<"Enter the x and y = ";
	cin>>q->x>>q->y;
	cout<<p->x<<" "<<p->y<<endl;
	cout<<q->x<<" "<<q->y;

 	return 0;
}


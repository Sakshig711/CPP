/*Q16.
Create 2 runtime objects of Number.Scan and print their data in main() only.*/
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
	p=new Number();
	q=new Number();
	
	p=&T1;
	q=&T2;
	cout<<"Enter the x and y = ";
	cin>>p->x>>p->y;
	
	cout<<"Enter the x and y = ";
	cin>>q->x>>q->y;
	
	cout<<"\n"<<p->x<<" "<<p->y;
	cout<<"\n"<<q->x<<" "<<q->y;


 	return 0;
}


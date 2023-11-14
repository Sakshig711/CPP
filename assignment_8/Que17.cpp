/*Scan and print data of 2 runtime objects.You can add member functions.
Do not use friend function.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void scan()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		
		void show()
		{
			cout<<"\n"<<x<<" "<<y;
		}
};

int main()
{
	Number T1,T2;
	Number *p,*q;
	p=new Number();
	q=new Number();
	
	p=&T1;
	q=&T2;
	
	p->scan();
	q->scan();
	p->show();
	q->show();

 	return 0;
}


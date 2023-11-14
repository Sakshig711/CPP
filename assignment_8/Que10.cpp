/*Q10.

For 3 objects of Number in main(),scan and print their data using pointer to object only.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void scan()
		{
			cout<<"enter the x and y = ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<x<<" "<<y;
		}
};
int main()
{
	Number T1,T2,T3;
	Number *p;
	p=&T1;
	p->scan();
	p=&T2;
	p->scan();
	p=&T3;
	p->scan();
	
	p=&T1;
	p->print();
	p=&T2;
	p->print();
	p=&T3;
	p->print();
	
	

 	return 0;
}


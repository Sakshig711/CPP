#include<iostream>
using namespace std;
class Number
{
	
	public:
		int x;
		Number()
		{
			x=0;
			cout<<"\nObject created "<<x;
		}
		~Number()
		{
			cout<<"\nobject destroy "<<x;
		}
};

int main()
{
	{
		Number *p;
		p = new Number[3];
		(p+0)->x=10;
		(p+1)->x=20;
		(p+2)->x=30;
	
		//delete p;
	}
	cout<<"Main ends";
 	return 0;
}


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
	Number *p;
	p= new Number[3];
	int i;
	for(i=0; i<3; i++)
	{
		cout<<"\nEnter the integer = ";
		cin>>(p+i)->x;
	}
	for(i=0; i<3; i++)
	{
		cout<<(p+i)->x<<endl;;
	}


 	return 0;
}


#include<iostream>
using namespace std;
class Number
{
	int x;
	public:
		Number(int a)
		{
			x=a;
			cout<<"\nObject created "<<x;
		}
		~Number()
		{
			cout<<"\nobject destroy "<<x;
		}
};
int main()
{
	Number obj(1);
	Number *p;
	p=new Number(11);
	delete p;
	


 	return 0;
}


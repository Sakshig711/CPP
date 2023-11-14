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
	Number T1(1);
	{
		Number T2(2);
		{
			Number T3(3);
		}
		Number T4(4);
	}
	Number T5(5);
	


 	return 0;
}


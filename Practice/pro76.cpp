#include<iostream>
using namespace std;

class Number
{
	public:
		Number(int a)
		{
			cout<<"In 1 function";
		}

		Number(int a,int b)
		{
			cout<<"\nIn 2 function";
		}
};

int main()
{
	Number T1(10);
	Number T2(23,76); 

 	return 0;
}


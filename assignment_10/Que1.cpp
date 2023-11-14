/*1.WAP to understand default,parameterized and copy constructor.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		Number()
		{
			cout<<"In default";
		}
		Number(int a)
		{
			cout<<"\nIn paramtrz";
		}
};
int main()
{
	Number obj;
	Number var(34);
	


 	return 0;
}


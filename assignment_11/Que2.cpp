/*Q2.WAP to explain copy constructor while passing parameter by value.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x;
		Number()
		{
			cout<<"In constructor";
		}
		Number(Number &temp)
		{
			cout<<"\nIn copy constructor";
		}
		
};
int main()
{
	Number T1;
	Number T2(T1);


 	return 0;
}


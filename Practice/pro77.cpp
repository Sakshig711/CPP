#include<iostream>
using namespace std;

class Number
{
	public:
		Number(int a)
		{
			cout<<"in parametrz";
		}
		Number(Number &temp)
		{
			cout<<"\nin copy";
		}
}; 
int main()
{
	Number T1(1);
	Number T2(T1);


 	return 0;
}


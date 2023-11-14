#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		Number(int a)
		{
			cout<<"in parametrz";
		}
		Number(Number &temp)
		{
			x=temp.x;
			cout<<"\nin copy";
		}
}; 
int main()
{
	Number T1(10);
	Number T2(T1);
	
	cout<<"\n"<<T2.x;


 	return 0;
}


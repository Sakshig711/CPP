/*1.WAP to explain static members in class.*/
#include<iostream>
using namespace std;


class Number
{
	public:
		int x;
		static int y;	
};

int main()
{
	Number T1,T2;
	T1.x=6;
	T1.y=7;
	cout<<T1.y;
	
 	return 0;
}


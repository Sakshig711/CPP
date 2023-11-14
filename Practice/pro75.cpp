#include<iostream>
using namespace std;

void myfun(int a)
{
	cout<<"In 1 function";
}

void myfun(int a,int b=70)
{
	cout<<"\nIn 2 function";
}
int main()
{
	myfun(10);
	myfun(5,7);

 	return 0;
}

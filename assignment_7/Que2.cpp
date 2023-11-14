/*2.WAP to explain default arguments.*/
#include<iostream>
using namespace std;



void myfun(int a,int b,int c=8)
{
	cout<<" "<<a<<" "<<b<<" "<<c<<endl;
}
int main()
{
	int a,b,c;
	myfun(5,7);
	myfun(4,7);
	myfun(57,8);

 	return 0;
}


#include<iostream>
using namespace std;
void myfun(int b,int c,int a=2);
int main()
{
	myfun(4,7);
	myfun(3,6,8);
	myfun(8,4);
	myfun(4,9);

 	return 0;
}
void myfun(int b,int c,int a)
{
	cout<<" "<<b<<" "<<c<<" "<< a <<endl;
}



#include<iostream>
using namespace std;

void myfun( int  *m);
int main()
{
	int x = 10;
	int *p;
	cout<<"\nx = "<<x;  //10
	p= new int[1] ;
	
	myfun(p);
	
	cout<<"\nx = "<<x;  //15
	
	return 0;
}
void myfun( int  *m)
{
	m=15;
}


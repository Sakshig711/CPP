/*3.WAP to explain references in CPP.*/
#include<iostream>
using namespace std;



void myfun(int &a)
{
	a=89;
	cout<<a;
}
int main()
{
	int x=5;
	myfun(x);


 	return 0;
}


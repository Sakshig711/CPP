#include<iostream>
using namespace std;

int myfun(int &b);
int main()
{
	int a = 10;
	
	cout<<a<<endl;  //10  
	
	a = myfun(a);
	
	cout<<a;  //25 

	return 0;
}
int myfun(int &b)
{
	b=25;
	return b;
}


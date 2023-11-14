/*Q1.Scan 3 integers from user.Find the largest value using conditional operator.*/
#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter 3 integers = ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"a is greater";
	}
	else if(b>a && b>c)
	{
		cout<<"b is greater";
	}
	else
	{
		cout<<"c is greater";
	}

 	return 0;
}


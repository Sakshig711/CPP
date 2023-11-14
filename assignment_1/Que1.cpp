/*1.Scan 3 integers from user.Find the largest integer using conditional operator.*/
#include<iostream>
using namespace std;
int main()
{
	int num[3];
	int i;
	puts("enter 3 elements=");
	for(i=0; i<=2; i++)
	{
		cin>>num[i];
	}
	if(num[0]>num[1] && num[0]>num[2])
	{
		cout<<"largest integer is = "<<num[0];
	}
	else if(num[1]>num[0] && num[1]>num[2])
	{
		cout<<"largest integer is = "<<num[1];
	}
	else
	{
		cout<<"largest integer is = "<<num[2];
	}
 	return 0;
}


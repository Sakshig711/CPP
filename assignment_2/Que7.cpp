/*Q7.Scan array of 8 integers from user.Copy it in another array in reverse order*/
#include<iostream>
using namespace std;

int main()
{
	int i,num[8];
	cout<<"\nEnter the 8 integers = ";
	for(i=0; i<=7; i++)
	{
		
		cin>>num[i];
	}
	cout<<"\nIn reverse order = ";
	for(i=7; i>=0; i--)
	{
		cout<<"\n"<<num[i];
	}


 	return 0;
}


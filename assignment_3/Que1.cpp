/*1.Scan array of 10 integers.Copy it in another array.
Print both arrays.
([ ] notation)*/
#include<iostream>
using namespace std;

int main()
{
	int target[10];
	int source[10];
	int i;
	puts("Enter the array = ");
	for(i=0; i<10; i++)
	{
		cin>>target[i];
	}
	for(i=0; i<10; i++)
	{
		source[i]=target[i];
	}
	for(i=0; i<10; i++)
	{
		cout<<" "<<target[i];
	}
	cout<<"\n";
	for(i=0; i<10; i++)
	{
		cout<<" "<<source[i];
	}
	

 	return 0;
}


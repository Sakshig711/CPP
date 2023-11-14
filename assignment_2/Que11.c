/*
Q11.Scan array of n integers from user.Print addition of all integers.
While printing the result,forst print whole array then print addition.*/

#include<iostream>
using namespace std;

int main()
{
	int arr[];
	int* p;
	cout<<"Enter number of array u want = "<<endl;
	cin>>n;
	p= new(int[n]);
	for(i=0; i<n; i++)
	{
		cin<<arr[i];
	}
	int sum=0;
	for(i=0; i<n; i++)
	{
		cout<<arr[i];
		sum=sum+arr[i];
	}
	cout<<"sum is = "<<sum;

 	return 0;
}


/*
Q6.Scan an array of 6 inetegers from user.Find the maximum value in the array.*/
#include<iostream>
using namespace std;

int main()
{
	int arr[6];
	int temp,i,j;
	cout<<"Enter the array = ";
	for(i=0; i<6; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<6; i++)
	{
		for(j=i+1; j<6; j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Maximun value in array = "<<arr[0];


 	return 0;
}


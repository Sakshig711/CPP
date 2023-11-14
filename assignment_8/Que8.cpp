/*Q8.
WAP to scan array of 8 integers in main().Sort it in descending order. */
#include<iostream>
using namespace std;

int main()
{
	int arr[8];
	int i,j,temp;
	cout<<"Enter the array of 8 integers = ";
	for(i=0; i<8; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<8; i++)
	{
		for(j=i+1; j<8; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0; i<8; i++)

	{
		cout<<" "<<arr[i];
	}

 	return 0;
}

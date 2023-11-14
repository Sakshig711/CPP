/*Q14.Read new operator theory.
Create an array of n integers.Sort this array in ascending order.*/
#include<iostream>
using namespace std;

int main()
{
	int *p,n;
	p=new int();
	p=&n;
	cout<<"Enter the no of elements u want = ";
	cin>>n;
	int arr[n];
	int i,j,temp;
	cout<<"Enter the array = ";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}


 	return 0;
}


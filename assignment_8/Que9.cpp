/*Q9
Create an array of 6 students.Sort array in ascending order by age.*/
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


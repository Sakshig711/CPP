/*Q11.

Create an array of 3 objects.Find the largest element from 15 integers.
Do not add any member or independant function.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int num[5];
};
int main()
{
	Number arr[3];
	int i,j;
	for(i=0; i<3; i++)
	{
		cout<<"enter the array = ";
		for(j=0; j<5; j++)
		{
			cin>>arr[i].num[j];
		}
	}
	int max=arr[0].num[0];
	for(i=0; i<5; i++)
	{
		
		if(max<arr[0].num[i])
		{
			max=arr[0].num[i];
		}
	}
	int a=max;
	max=arr[0].num[0];
	for(i=0; i<5; i++)
	{
		if(max<arr[0].num[i])
		{
			max=arr[0].num[i];
		}
	}
	max=arr[1].num[0];
	for(i=0; i<5; i++)
	{
		if(max<arr[1].num[i])
		{
			max=arr[1].num[i];
		}
	}
	int b=max;
	max=arr[3].num[0];
	for(i=0; i<5; i++)
	{
		if(max<arr[3].num[i])
		{
			max=arr[3].num[i];
		}
	}
	int c=max;
	int ans;
	ans=a>b?a:b;
	ans=ans>c?ans:c;
	
	cout<<ans;
	

 	return 0;
}


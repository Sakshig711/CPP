#include<iostream>
using namespace std;

int main()
{
	int num[8];
	int i;
	cout<<"Enter the array of 8 integers = ";
	for(i=0; i<8; i++)
	{
		cin>>num[i];
	}
	int max;
	max=num[0];
	
	for(i=0; i<8; i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}
	}
	cout<<"The maximum integer in array is = "<<max;

 	return 0;
}


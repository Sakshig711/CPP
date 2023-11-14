/*7.Scan array of 8 integers from user.Write menu driven program for following activities.
-find largest value
-find smallest value
-Scan a number from user and check if it is present in the array or not.*/
#include<iostream>
using namespace std;

int main()
{
	int arr[8];
	int *p=&arr[0];
	int i,x;
	int min=*(p+i);
	int max=*(p+i);
	puts("Enter the array = ");
	for(i=0; i<8; i++)
	{
		cin>>*(p+i);
	}
	int num;
	puts("Enter 1:find largest value\n2:find smallest value\n3:for num is present or not");
	cin>>num;
	
	switch(num)
	{
		case 1:
			
			for(i=0; i<6; i++)
			{
				if(*(p+i)>max)
				{
					max=*(p+i);
				}
			}
		
			cout<<"the largest number is = "<<max;
			break;
			
		case 2:
			
			for(i=0; i<8; i++)
			{
				if(*(p+i)<max)
				{
					max=*(p+i);
				}
			}
			cout<<"the smallest number is = "<<min;
			break;
			
		case 3:
			puts("Enter a number = ");
			cin>>x;
			for(i=0; i<8; i++)
			{
				if(*(p+i)==x)
				{
					cout<<" present";
					break;
				}
				else
				{
					cout<<"not present";
				}
			}
			break;
			
		default : cout<<"invalid input";
	}

 	return 0;
}


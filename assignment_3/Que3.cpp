/*3.Declare and itialize an array of 8 integers.Find the smallest value from array.
(pointer notation)
*/
#include<iostream>
using namespace std;

int main()
{
	int arr[8];
	int *p=&arr[0];
	int i;
	puts("Enter the array = ");
	for(i=0; i<8; i++)
	{
		cin>>*(p+i);
	}
	int max=*(p+i);
	for(i=0; i<8; i++)
	{
		if(*(p+i)<max)
		{
			max=*(p+i);
		}
	}
	cout<<"the smallest number is = "<<max;
	


 	return 0;
}


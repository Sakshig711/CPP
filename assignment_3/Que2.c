/*2.Scan array of 6 integers from user.Find the largest value from array.
(pointer notation)*/
#include<iostream>
using namespace std;


int main()
{
	arr[6];
	int *p=&arr[0];
	int i;
	for(i=0; i<6; i++)
	{
		cin<<*(p+i);
	}
	int max=*(p+i);
	for(i=0; i<6; i++)
	{
		if(*(p+i)>max)
		{
			max=*(p+i);
		}
	}
	cout<<"the largest number is = "<<maz;
	


 	return 0;
}


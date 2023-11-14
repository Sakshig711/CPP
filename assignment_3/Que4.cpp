/*4.Scan array of 6 characters from user and print them.
([] notation)*/
#include<iostream>
using namespace std;

int main()
{
	int target[6];
	
	int i;
	puts("Enter the array = ");
	for(i=0; i<6; i++)
	{
		cin>>target[i];
	}
	for(i=0; i<6; i++)
	{
		cout<<" "<<target[i];
	}
	
	

 	return 0;
}



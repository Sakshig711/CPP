/*Q3.
Declare and initialize an array of 8 integers.
Scan a number from user.If that number is present in array,delete it.
Deletion of element will not change the size of array.
*/
#include<iostream>
using namespace std;

int main()
{
	int arr[8]={4,7,2,7,6,7,4,8};
	
	int n;
	cout<<"Enter the number u want check = ";
	cin>>n;
	int i;
	for(i=0; i<8; i++)
	{
		if(arr[i]==n)
		{
			cout<<"\nnumber exist";
			arr[i]='6'
		}
	}
	


 	return 0;
}


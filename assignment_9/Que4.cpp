/*Q4.Scan 2 strings from user.Check if they are equal or not.
Write whole code in main() only.*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[20];
	char arr[20];
	
	cout<<"Enter the string = ";
	cin.getline(str,20);
	
	cout<<"Enter the another string = ";
	cin.getline(arr,20);

	int res;
	res = strcmp (str,arr);
	
	if(res==0)
	{
		cout<<"strings are equal";
	}
	else 
	{
		cout<<"strings are not equal";
	}
 	return 0;
}


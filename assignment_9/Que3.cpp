/*Q3.Scan 2 strings from user.Check which one will go first in dictionary.
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
	
	if(res==1)
	{
		cout<<"arr will go first";
	}
	else if(res==-1)
	{
		cout<<"str will go first";
	}
 	return 0;
}


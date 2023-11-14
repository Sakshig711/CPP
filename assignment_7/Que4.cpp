/*4.Scan 2 strings from user.swap them.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	char str[40];
	char arr[40];
	cout<<"Enter the strings = ";
	cin.getline(str,40);
	cin.getline(arr,40);
	char temp;
	strcpy(temp,str);
	strcpy(str,arr);
	strcpy(arr,temp);
	cout<<str;
	cout<<arr;
	

 	return 0;
}


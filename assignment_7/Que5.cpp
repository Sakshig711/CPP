/*5.WAP to check how strcpy() and strlen() work.*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	char str[40];
	char arr[40];
	cout<<"Enter the strings = ";
	cin.getline(str,40);
	int len;
	len=strlen(str);
	strcpy(arr,str);

 	return 0;
}


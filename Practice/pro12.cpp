#include<iostream>
using namespace std;

int main()
{
	char str[50];
	char arr[50];
	puts("Enter string str = ");
	cin.getline(str,30);
	puts("Enter string arr = ");
	cin.getline(arr,30);
	puts("strings are = ");
	cout<<&str[0]<<endl;
	cout<<&arr[0];
 	return 0;
}


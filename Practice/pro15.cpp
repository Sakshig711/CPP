#include<iostream>
using namespace std;

int main()
{
	char str[50];
	char arr[50]; 
	puts("Enter string str = ");
	cin.getline(str,50);
	puts("Enter string arr = ");
	cin.getline(arr,50);
	int i=0;
	while(str[i]!='\0')
	{
//		cout<<str[i];
		i++;
	}
	int j=0;
	while(arr[j]!='\0')
	{
//		cout<<arr[j];
		j++;
	}
	if(i==j)
	{
		cout<<"The length is same";
	}

 	return 0;
}

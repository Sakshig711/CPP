#include<iostream>
using namespace std;

int main()
{
	char str[50];
	puts("Enter string str = ");
	cin.getline(str,50);
	int i=0;
	while(str[i]!='\0')
	{
//		cout<<str[i];
		i++;
	}
	cout<<"The length of string is = "<<i;

 	return 0;
}


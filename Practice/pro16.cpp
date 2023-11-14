#include<iostream>
using namespace std;

int main()
{
	char str[50];
	puts("Enter string str = ");
	cin.getline(str,50);
	int i=0;
	int cnt=0;
	while(str[i]!='\0')
	{
		if(str[i]=='A')
		{
			cnt++;
		}
		i++;
	}
	cout<<"A is present "<<cnt<<" times";

 	return 0;
}


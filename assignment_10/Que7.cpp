/*7.For following main(),scan 2 strings from user and check if they are equal or not.
Do not declare your own varibale or array in program.Use the given variable
only.
	int main()
	{
		char *p,*q;
		int res;
	}*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p,*q;
	int res;
	
	p = new char[20];
	q = new char[20];
	cout<<"Enter the string = ";
	cin.getline(p,20);
	cout<<"Enter the 2nd string = ";
	cin.getline(q,20);	
	res = strcmp(p,q);
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


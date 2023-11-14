/*6.For following main(),scan a string from user and print its length.
Do not declare your own varibale or array in program.Use the given variable
only.
	int main()
	{
		char *p;
	}*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p;
	p = new char[20];
	cout<<"Enter the string = ";
	cin.getline(p,20);
	int len;
	len=strlen(p);
	
	cout<<"The length is = "<<len;


 	return 0;
}


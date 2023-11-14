#include<iostream>
using namespace std;

int main()
{
	char *p;
	p = new char[20];
	
	cout<<"Enter the string = ";
	cin.getline(p,20);
	cout<<p;


 	return 0;
}


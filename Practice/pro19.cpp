#include<iostream>
using namespace std;
void myfun();
int main()
{
	int num;
	cout<<"Enter a number = ";
	cin>>num;
	myfun();
	cout<<"Number is = "<<num<<endl;

 	return 0;
}
void myfun()
{
	char str[50];
	cout<<"Enter the string = ";
//	cin.ignore(1);
	cin.getline(str,50);
	cin.getline(str,50); 
	cout<<"The sting is = "<<str<<endl;
}


/*Q2.Scan a character from user.Check if it is capital alphabet or small alphabet.*/
#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter the character = ";
	cin>>ch;
	if(ch >=97 && ch<=123)
	{
		cout<<"Alphabet is small";
	}
	else if(ch>=65 && ch<=91)
	{
		cout<<"Alphabet is capital";
	}
	else
	{
		cout<<"invalid input";
	}


 	return 0;
}


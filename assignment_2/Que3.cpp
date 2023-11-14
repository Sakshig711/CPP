/*Q3.Write a menu driven program for user to choose from any given 3 language.
e.g.If user enters 1,print marathi,for 2,print hindi and so on.*/
#include<iostream>
using namespace std;

int main()
{
	int choise;
	cout<<"Enter 1 for MARATHI\nEnter 2 for HINDI\nEnter 3 for ENGLISH :";
	cin>>choise;
	
	switch(choise)
	{
		case 1: cout<<"MARATHI";
			break;
			
		case 2: cout<<"HINDI";
			break;
			
		case 3: cout<<"ENGLISH";
			break;
			
		default: cout<<"Invalid input";
	}

 	return 0;
}


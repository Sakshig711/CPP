/*Q4.Write a menu driven program for arithmetic operations of 2 integers*/
#include<iostream>
using namespace std;

int main()
{
	int choise;
	int x,y;
	cout<<"Enter 2 integers = ";
	cin>>x>>y;
	cout<<"Enter 1 for addition\nEnter 2 for substraction\nEnter 3 for division\nEnter 4 for multiplication:\n";
	
	cin>>choise;
	
	switch(choise)
	{
		case 1: cout<<x+y;
			break;
			
		case 2: cout<<x-y;
			break;
			
		case 3: cout<<x*y;
			break;
			
		float div;
		div=x/y;
		case 4: cout<<div;
			break;
			
		default: cout<<"Invalid input";
	}

 	return 0;
}


/*Q6.
Scan 2 integers from user.Print their addition.
Then ask user if he wants to perform addition of 2 more integers.
Repeat the process if he wants to.Else stop the program.*/
#include<iostream>
using namespace std;

int main()
{
	int x,y,n;
	
	do(1<3)
	{
	
		cout<<"Enter the 2 integers = ";
		cin>>x>>y;
		
		cout<<"The addition is = "<<x+y;
		
		cout<<"\nif u want to repeat press 1 otherwise 0 =  ";
		cin>>n;
		
		
	}while(n==0);
	

 	return 0;
}


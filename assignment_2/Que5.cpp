/*Q5.Scan year from user.Check if it is leap or not.Check the condition of leap in first assignment.*/
#include<iostream>
using namespace std;

int main()
{
	int year;
	cout<<"Enter the year = ";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<"It is leap year";
	}
	else
	{
		cout<<"It is not a leap year";
	}

 	return 0;
}


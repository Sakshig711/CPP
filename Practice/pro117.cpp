#include<iostream>
using namespace std;

int main()
{
	string S1 , S2;
	cout<<"Enter the string = ";
	getline(cin,S1);
	
	cout<<"Enter another string = ";
	getline(cin,S2);
	
	if(S1>S2)
	{
		cout<<S2<<"Will go 1st in dictionary ";
	}
	else
	{
		cout<<S1<<" Will go 1st in dictionary ";
	}

 	return 0;
}


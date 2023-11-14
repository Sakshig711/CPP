#include<iostream>
using namespace std;

int main()
{
	string S1,S2;
	
	cout<<"Enter the string = ";
	getline(cin,S1);
	
	cout<<"Enter another string = ";
	getline(cin,S2);
	
	int res;
	res=S1.length();
	cout<<res;

 	return 0;
}


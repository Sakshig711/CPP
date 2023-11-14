/*Q5.
Scan 6 city names from user.Sort them alphabetically in ascending order.
Use inbuilt string data type.*/
#include<iostream>
using namespace std;

int main()
{
	string str[6];
	int i;
	cout<<"Enter 6 city names = ";
	for(i=0; i<6; i++)
	{
		getline(cin,str[i]);
	}
	for(i=0; i<5; i++)
	{
		cout<<"\n"<<str[i];
	}
	

 	return 0;
}


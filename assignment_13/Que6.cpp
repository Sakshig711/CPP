/*Q1.

Scan 2 strings from user here and find their length.
Compare them and check if the are equal or not.*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p,*q;
	p = new char[20];
	cout<<"Enter the string = ";
	cin.getline(p,20);
	
	q = new char[20];
	cout<<"Enter the string = ";
	cin.getline(q,20);
	
	int res;
	res=strlen(p);
	int ans;
	ans=strlen(q);
	int i;
	int cnt=0;
	cout<<"length of 1st string is = "<<res;
	cout<<"\nlength of 2nd string is = "<<ans;
	for(i=0; i<res; i++)
	{
		if(*(p+i)==*(q+i))
		{
			cnt++;
		}
	}
	if(i==cnt)
	{
		cout<<"\nstrings are equal";
	}
	else
	{
		cout<<"\nNot equal";
	}


 	return 0;
}


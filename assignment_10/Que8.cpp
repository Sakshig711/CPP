/*8.Scan 3 strings from user.Find the string which will go first in dictionary.*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char *p,*q,*r;
	int res1,res2,res3;
	
	p = new char[20];
	q = new char[20];
	r = new char[20];
	cout<<"Enter the string = ";
	cin.getline(p,20);
	cout<<"Enter the 2nd string = ";
	cin.getline(q,20);
	cout<<"Enter the 3rd string = ";
	cin.getline(r,20);
	
	res1 = strcmp(p,q);
	if(res1==1)
	{
		res2=strcmp (q,r);
		{
			if(res2==1)
			{
				cout<<"3rd string will go 1st";
			}
			else
			{
				cout<<"2nd string will go 1st";
			}
		}
	}
	else
	{
		res3=strcmp(p,r);
		{
			if(res3==1)
			{
				cout<<"1st string will go 1st";
			}
			else
			{
				cout<<"3rd string will go 1st";
			}
		}
	}
	


 	return 0;
}


#include<iostream>
#include<string.h>
using namespace std;

class String
{
	public:
		char str[30];
		void getString()
		{
			cout<<"Enter the string = ";
			cin.getline(str,30);
		}
		int operator==(String temp)
		{
			int res;
			res=strcmp(str,&temp.str[0]);
			if(res==0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	String S1,S2;
	S1.getString();
	S2.getString();
	if(S1 == S2)
	{
		cout<<"Both strings are equal";
	}
	else
	{
		cout<<"\nStrings are not equal";
	}
}


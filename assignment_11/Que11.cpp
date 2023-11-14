#include<iostream>
using namespace std;

class Distance
{
	public:
		int km;
		int mtr;
		
		int operator==(Distance temp)
		{
			if(km==temp.km && mtr==temp.mtr)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};
istream & operator>>(istream &din,Distance temp)
{
	cin>>temp.km>>temp.mtr;
	return cin;
}
int main()
{
	Distance D1,D2;
	cout<<"Enter 2 distances = ";
	cin>>D1>>D2;
	if(D1 == D2)	
	{
		cout<<"\nBoth distances are equal";
	}
	else
	{
		cout<<"\nNot equal";
	}
}


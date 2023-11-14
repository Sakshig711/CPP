#include<iostream>
using namespace std;
class Power;
class Base
{
	private:
		int b;
		friend void getdata(Base &base,Power &power);
		friend void calc(Base &base,Power &power);
};


class Power
{
	private:
		int p;
		friend void getdata(Base &base,Power &power);
		friend void calc(Base &base,Power &power);
};

void getdata(Base &base,Power &power)
{
	cout<<"Enter the base = ";
	cin>>base.b;
	
	cout<<"Enter the power = ";
	cin>>power.p;
}

void calc(Base &base,Power &power)
{
	int ans=1;
	int i;
	for(i=0; i<=power.p; i++)
	{
		ans=ans*base.b;
	}
	cout<<"Ans = "<<ans;
}

int main()
{
	Base objb;
	Power objp;
	
	getdata(objb,objp);
	calc(objb,objp);


 	return 0;
}


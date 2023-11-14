#include<iostream>
using namespace std;
class Power;
class Base
{
	//private:
	int b;
	public:
		void getdata(Power);
		void calc(Power);
};

class Power
{
	private:
	int p;
	friend void getdata (Power &power);
	friend void calc(Power &power);
	//friend class Base; 
};


void Base::getdata(Power &power)
{
	cout<<"Enter the base = ";
	cin>>base;
	
	cout<<"Enter the power = ";
	cin>>power.p;
	
}

void Base::calc(Power &power)
{
	int ans=1;
	int i;
	for(i=0; i<=power.p; i++)
	{
		ans=ans*base;
	}
	cout<<"Ans = "<<ans;
}

int main()
{
	Base base;
	Power power;
	
	base.getdata(power);
	base.calc(power);


 	return 0;
}


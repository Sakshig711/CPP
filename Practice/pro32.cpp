#include<iostream>
using namespace std;
class Power;
class base
{
	int b;
	public :
		void getdata(Power & power);
		void calc(Power power);
};
class Power
{
	int p;
	friend void base::getdata(Power & power);
	friend void base::calc(Power power);
};
void base::getdata(Power & power)
{
	cin>>b;
	cin>>power.p;
}
void base::calc(Power power)
{
	int i,ans = 1;
	for(i = 1;i<=power.p;i++)
	{
		ans = ans * b;
	}
	cout<<ans;
}
int main()
{
	base b;
	Power p;
	b.getdata(p);
	b.calc(p);

 	return 0;
}


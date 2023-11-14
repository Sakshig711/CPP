/*17.

Add member functions in class Calc to scan bas and power.
Find base raised to power.(This is composition)
*/
#include<iostream>
using namespace std;
class Power
{
	public:
		int p;
		
		Power()
		{
			cout<<"Enter the power";	
			cin>>p;
		}
};

class Base
{
	public:
		int b;
		Base()
		{
			cout<<"Enter the base";
			cin>>b;
		}
};



class Calc
{
	public:
		Base base;
		Power power;
		void show()
		{
			int i,ans;
			for(i=0; i<=power.p; i++)
			{
				ans=ans*base.b;
			}
		}
		friend int main();
		
};
int main()
{
	calc obj;
	obj.show();
	

 	return 0;
}


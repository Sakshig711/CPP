#include<iostream>
using namespace std;
class Power;
class Base
	{
		private:
			int b;
		public:
			void scanbase();
			int getbase();
			friend void  calc(Base base,Power power);
	
	};
	void Base::scanbase()
	{
		cout<<"Enter the base = ";
		cin>>b;
	}

	class Power
	{
		private:
			int p;
		public:
			void scanpower();
			int getpower();
			friend void  calc(Base base,Power power);
	};
	void Power::scanpower()
	{
		cout<<"Enter the power = ";
		cin>>p;
		
	}
	void  calc(Base base,Power power)
	{
		int i;
		int ans=1;
		for(i=0; i<= power.p;i++)
		{
			ans=ans* base.b;
		}
		cout<<"Ans = "<<ans;
	}
	int main()
	{
		Base base;
		Power power;
		base.scanbase();
		power.scanpower();
		calc(base,power);
		return 0;
	}


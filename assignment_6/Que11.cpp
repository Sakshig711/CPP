/*5)class Time has 2 private data members.(hours and minutes)*/
#include<iostream>
using namespace std;
class Time
{
	private:
		int hr,min;
		public:
		static Time getdata();
		int total()
		{
			min=hr*60+min;
			return min;
		}
		
};
Time Time::getdata()
{
	Time obj;
	cout<<"Enter the hour and minute = ";
	cin>>obj.hr>>obj.min;
	return obj;

}

	int main()
	{
		Time T1,T2;
		T1 = Time::getdata();
		T2 = Time::getdata();
		int total1,total2;
		total1 = T1.total();
		total2 = T2.total();
		cout<<"\nTotal1 = "<<total1;
		cout<<"\nTotal2 = "<<total2;
		return 0;
	}


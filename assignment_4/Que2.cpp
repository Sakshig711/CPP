/*
Q13.
	class Time
	{
		public:
			int hour,min;
	}
Create 2 objects of class Time.Scan their data.
Convert these objects in total meters.Decide which one is greater.*/
#include<iostream>
using namespace std;
class Time
{
	public:
		int hour,min;
		void scan_data()
		{
			cout<<"Enter the hour and min = ";
			cin>>hour>>min;
		}
		void convert()
		{
			min=hour*60+min;
			cout<<"The total min are = "<<min;
		}
};

int main()
{
	Time T1,T2;
	T1.scan_data();
	T2.scan_data();
	T1.convert();
	T2.convert();


 	return 0;
}



/*
Scan time for 3 objects from user.
Find the object with largest time.
This program is to be done 2 times.
-Without operator overloading 
-With operator overloading.
(Think about main() first)*/
#include<iostream>
using namespace std;
class Time
{
	private:
		int hrs,mins;
		Time()
		{
			cout<<"Enter the hrs and min = ";
			cin>>hrs>>mins;
		}
		friend int main();
};

int main()
{
	Time obj[3];
	int i;
	int max;
	max=obj[0].hrs;
	for(i=0; i<3; i++)
	{
		if(max<obj[i].hrs)
		{
			max=obj[i].hrs;
		}
	}
	cout<<max;
 	return 0;
}


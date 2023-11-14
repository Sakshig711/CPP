#include<iostream>
using namespace std;
class Time
{
	private:
		int min,hour;
	public:
		void set (int a, int b);
		int convert();
};
void Time::set(int a,int b)
{
	min=a;
	hour=b;
}
int Time::convert()
{
	int total;
	total=hour*60+min;
	return total;
}
int main()

{
	Time T1,T2;
	int n,m;
	int res1,res2;
	cout<<"Enter the min and hour = ";
	cin>>n>>m;
	T1.set(n,m);
	
	
	cout<<"Enter the min and hour = ";
	cin>>n>>m;
	T2.set(n,m);
	res1=T1.convert();
	res2=T2.convert();
	cout<<"min are = "<<res1<<" "<<res2;
	
	

 	return 0;
}


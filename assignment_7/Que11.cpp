#include<iostream>
using namespace std;

class Number	
{
	public:
		int x,y;
		Number scan(Number T1)
		{
			cout<<"Enter the x and y = ";
			cin>>T1.x>>T1.y;
			return T1;
		}
		void add(Number T1,Number T2)
		{
			x= T1.x + T2.x;
			y= T1.y + T2.y;
		}
		void print()
		{
			cout<<x<<" "<<y;
		}
};

int main()
{
	Number T1,T2,T3;	
	T1.scan(T1);
	T2.scan(T2);
	T3.add(T1,T2);
	T3.print();

	return 0;
}

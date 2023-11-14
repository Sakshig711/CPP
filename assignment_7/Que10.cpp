/*************/
#include<iostream>
using namespace std;

class Number	
{
	public:
		int x,y;
		void scan(Number D1)
	{
		cout<<"Enter the x and y = ";
		cin>>D1.x>>D1.y;
	}	
	
	Number add(Number D1,Number D2)
	{
		Number obj;
		obj.x= D1.x + D2.x;
		obj.y= D1.y + D2.y;
	
		return obj;
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
	T3 = T1.add(T1,T2);
	cout<<T3.x<<" "<<T3.y;
	//T3.print();
	return 0;
}



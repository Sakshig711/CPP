#include<iostream>
using namespace std;

class Number	
{
	public:
		int x,y;
	void scan(Number & D1)
	{
		cout<<"Enter x and y = ";
		cin>>D1.x>>D1.y;
	}

	void print()
	{
		cout<<" "<<x<<" "<<y;
	} 
			
};

int main()
{
	Number T1,T2;
	T1.scan(T1);
	T1.scan(T2);
	T1.print();
	T2.print();
	return 0;
}	
	
	



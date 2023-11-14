#include<iostream>
using namespace std;

class Number	
{
	public:
		int x,y;
};
void scan(Number D1)
{
	cout<<"Enter the x and y = ";
	cin>>D1.x>>D1.y;
}
void print(Number D1)
{
	cout<<D1.x<<" "<<D1.y;
}

int main()
{
	Number T1,T2;
	Number::scan(T1);
	Number::scan(T2);	
	Number::print(T1);
	Number::print(T2);
		
	return 0;
}


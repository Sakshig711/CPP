#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		void print()
		{
			cout<<x<<" "<<y;
		}
};
Number scan()
		{
			Number obj;
			cout<<"Enter the x and y = ";
			cin>>obj.x>>obj.y;
			return obj;
		}
void print(Number obj)
{
	cout<<obj.x<<" "<<obj.y;
}
int main()
	{
		Number T1,T2;
		T1 = scan();
		T2 = scan();
		print(T1);
		T2.print();
	}


/*
1.
	int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();
	}
*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void scan()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
};

int main()
	{
		Number T1,T2;
		T1.scan();
		T2.scan();
		T1.print();
		T2.print();

 	return 0;
}


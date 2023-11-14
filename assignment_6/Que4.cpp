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
		void add(Number T1,Number T2)
		{
			x=T1.x + T2.x;
			y=T1.y + T2.y;
		}
		void show()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
	{
		Number T1,T2,T3;
		T1.scan();
		T2.scan();
		T3.add(T1,T2);
		T3.show();
		return 0;
	}


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
		void add(Number T2,Number &T3)
		{
			T3.x=x + T2.x;
			T3.y=y + T2.y;
		}
		void show()
		{
			cout<<x<<" "<<y<<endl;
		}
};
void scan(Number &T2)
{
	cout<<"Enter the x and y = ";
	cin>>T2.x>>T2.y;
}

int main()
{
	Number T1,T2,T3;
	T1.scan();
	scan(T2);
	T1.add(T2,T3);
	T3.show();
}


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
void scan(Number &T2)
{
	cout<<"Enter the x and y = ";
	cin>>T2.x>>T2.y;
}

Number add(Number T1,Number T2)
{
	Number obj;
	obj.x=T1.x + T2.x;
	obj.y=T1.y + T2.y;
	return obj;
}

int main()
	{
		Number T1,T2,T3;
		T1.scan();
		scan(T2);
		T3 = add(T1,T2);
		T3.print();
		return 0;
	}


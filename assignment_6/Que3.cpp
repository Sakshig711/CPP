#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void scan(Number &obj)
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
			cout<<"Enter the another x and y = ";
			cin>>obj.x>>obj.y;
		}
		void print(Number obj)
		{
			cout<<x<<" "<<y<<endl;
			cout<<obj.x<<" "<<obj.y;	
		}
};

int main()
	{
		Number T1,T2;
		T1.scan(T2);
		T1.print(T2);
		
		return 0;
	}


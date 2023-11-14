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
		int operator==(Number temp)
		{
			if(x==temp.x && y==temp.y)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
};

int main()
{
	Number T1,T2;
	T1.scan();
	T2.scan();
	
	if(T1==T2)
	{
		cout<<"Obj equal";
	}
	else
	{
		cout<<"Not equal";
	}
	


 	return 0;
}


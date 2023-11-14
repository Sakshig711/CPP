/*1)class Number contains 2 public datamembers.x and y.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		static void print(Number a);
		//friend void print(Number obj);
		void getdata()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		
		
};
	void Number::print(Number a)
	{
		cout<<a.x<<" "<<a.y<<endl;
	}

int main()
{
	Number T1,T2;	
	T1.getdata();
	T2.getdata();
	Number::print(T1);
	Number::print(T2);
	return 0;
}


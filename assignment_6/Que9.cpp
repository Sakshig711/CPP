/*3)class Number contains 2 private datamembers.x and y.*/
#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
		public:
		static Number getdata();
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
		
};
Number Number::getdata()
	{
		Number obj;
		cout<<"Enter x and y = ";
		cin>>obj.x>>obj.y;	
		return obj;
	}

	int main()
	{
		Number T1,T2;
		T1 = Number::getdata();
		T2 = Number::getdata();
		T1.print();
		T2.print();
	}

/*Q12.
	class Number
	{
		public:
			int x;
			int y;
	};
Create 2 objects in main().Scan their data and print.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		int y;
//		friend int main();
	void scan_data()
	{
		cout<<"Enter the x and y = ";
		cin>>x>>y;
	}
	void print_data()
	{
		cout<<x<<" "<<y;
	}	
};



int main()
{
	Number obj1,obj2;
	obj1.scan_data();
	obj2.scan_data();
	obj1.print_data();
	obj2.print_data();
 	return 0;
}



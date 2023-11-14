/*9.
class Number
{
	public:
		int *p;
};
For given class,scan data for 2 objects and print them.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int *p;
		void scan()
		{
			p=new int();
			cout<<"Enter the integer = ";
			cin>>*p;
		}
		void print()
		{
			cout<<"\n"<<*p;
		}
};
int main()
{
	Number obj,var;
	
	obj.scan();
	var.scan();
	
	obj.print();
	var.print();


 	return 0;
}



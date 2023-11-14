/*8.
Using object obj,try to access all 3 show() functions.
Try this code by changing access specifiers of membbers.*/
#include<iostream>
using namespace std;
class Grand
{
	public:
		void show()
		{
			cout<<"\nIn Grand show()";
		}
};
class Parent : public Grand
{
	public:
		void show()
		{
			cout<<"\nIn parent show()";
		}
};
class Child : public Parent
{
	public:
		void show()
		{
			cout<<"\nIn Child show()";
		}
};
int main()
{
	Child obj;
	obj.show();
	obj.Parent::show();
	obj.Grand::show();
	
	return 0;
}



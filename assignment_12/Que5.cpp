/*5.
In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Do not change access specifier of any member.Do not add any member to child.
Write path you have used to access each member in your program in Comment.*/
#include<iostream>
using namespace std;
class Parent
{
	protected:
		int y;
		void disp()
		{
			cout<<"\nIn parent disp() y = "<<y;
		}
	public:
		int z;
		void show()
		{
			cout<<"\nIn parent show() z = "<<z;
		}
};

class Child : private Parent
{
	public:
		
		void myfun()
		{
			cout<<"\nIn child myfun()";
			disp();
			show();
		}
};

int main()
{
	Child obj;
	//obj.show();
	obj.myfun();

 	return 0;
}


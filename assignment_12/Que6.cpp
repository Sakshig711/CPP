/*6.

In main() function,create an object of class Child and try to access each member
in Child as well as in its Parent class.(Access each member)
Write path you have used to access each member in your program in Comment.*/
#include<iostream>
using namespace std;
class Parent
{
	private:
		int y;
		void disp()
		{
			cout<<"\nIn parent disp()";
		}
	public:
		int z;
		void show()
		{
			cout<<"\nIn parent show()";
			disp();
		}
};

class Child : public Parent
{
	public:
		void myfun()
		{
			cout<<"\nIn child myfun()";
		}
};

int main()
{
	Child obj;
	obj.myfun();
	obj.show();


 	return 0;
}


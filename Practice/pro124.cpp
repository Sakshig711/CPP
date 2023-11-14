#include<iostream>
using namespace std;
class Parent
{
	public:
		void show()
		{
			cout<<"In parent show()";
		}
};
class Child
{
	public:
		void show()
		{
			cout<<"In child show()";
		}
};
int main()
{
	Child obj;
	obj.show();


 	return 0;
}


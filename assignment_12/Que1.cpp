/*1.WAP to check how multilevel inheritance works.
Try to access members of Parent from Child class.*/
#include<iostream>
using namespace std;
class Grand
{
	public:
		int x;
		void myfun()
		{
			cout<<"In Grand show()";
		}
};
class Parent: public Grand
{
	public:
		int y;
		void print()
		{
			cout<<"In parent show()";
		}
};
class Child: public Parent
{
	public:
		int z;
		void show()
		{
			cout<<"In Child show()";
		}
};
int main()
{
	Child obj;
	obj.show();


 	return 0;
}


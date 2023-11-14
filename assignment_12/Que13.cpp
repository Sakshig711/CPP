/*WAP to check constructor execution in multiple inheritance.
Both default and parameterized constructors expected.
Try virtual class also.*/
#include<iostream>
using namespace std;
class Parent
{
	public:
		Parent()
		{
			cout<<"\nIn def parent1";
		}
		Parent(int a)
		{
			cout<<"\nIn paramtz parent1 x = "<<a;
		}
};
class Parent2
{
	public:
		Parent2()
		{
			cout<<"\nIn def Parent2";
		}
		Parent2(int a)
		{
			cout<<"\nIn paramtz Parent2";
		}
};
class Child:public Parent
{
	public:
		Child()
		{
			cout<<"\nIn def child";
		}
		Child(int a)
		{
			cout<<"\nIn paramtz child x = "<<a;
		}
};
int main()
{
	Child obj;
	Child var(10);
	


 	return 0;
}



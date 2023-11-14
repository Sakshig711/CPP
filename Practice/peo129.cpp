#include<iostream>
using namespace std;
class Parent
{
	public:
		Parent()
		{
			cout<<"\nIn def parent";
		}
		Parent(int a)
		{
			cout<<"\nIn paramtz parent x = "<<a;
		}
};
class Child:public Parent
{
	public:
		Child()
		{
			cout<<"\nIn def child";
		}
		Child(int a):Parent(5)
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


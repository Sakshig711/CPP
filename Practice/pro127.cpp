#include<iostream>
using namespace std;
class Parent
{
	public:
		Parent()
		{
			cout<<"\nIn def parent";
		}
};
class Child:public Parent
{
	public:
		Child()
		{
			cout<<"\nIn def child";
		}
};
int main()
{
	Child obj;
	


 	return 0;
}


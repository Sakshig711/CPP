#include<iostream>
using namespace std;
class Parent
{
	public:
		void show()
		{
			cout<<"\nIn parent show()";
		}
};
class Child:public Parent
{
	public:
		void show()
		{
			cout<<"\nIn child show()";
		}
};
int main()
{
	Child obj;
	obj.show();
	obj.Parent::show();


 	return 0;
}


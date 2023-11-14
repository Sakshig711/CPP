#include<iostream>
using namespace std;
class Parent1
{
	public:
		void show()
		{
			cout<<"\nIn parent1 show()";
		}
};
class Parent2
{
	public:
		void show()
		{
			cout<<"\nIn parent2 show()";
		}
};
class Child:public Parent1,public Parent2
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
	obj.Parent2::show();
	obj.show();
	obj.Parent1::show();
	


 	return 0;
}


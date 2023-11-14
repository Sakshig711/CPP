/*WAP to check working of Diamond problem.Solve this problem using membership identity label.*/
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
class Parent1 : public virtual Grand
{
	public:
		void show()
		{
			cout<<"\nIn parent1 show()";
		}
};
class Parent2: public virtual Grand
{
	public:
		void show()
		{
			cout<<"\nIn Parent2 show()";
		}
};
class Child : public Parent1,public Parent2
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
	obj.Parent1::show();
	obj.Grand::show();
	obj.Parent2::show();


 	return 0;
}


/*WAP to check constructor execution in multiple inheritance.
Only default constructor expected.*/
#include<iostream>
using namespace std;
class Parent1
{
	public:
		Parent1()
		{
			cout<<"\nIn parent1";
		}
};
class Parent2
{
	public:
		Parent2()
		{
			cout<<"\nIn Parent2";
		}
};
class Child: public Parent1,public Parent2
{
	public:
		Child()
		{
			cout<<"\nIn child ";
		}
};
int main()
{
	Child obj;


 	return 0;
}


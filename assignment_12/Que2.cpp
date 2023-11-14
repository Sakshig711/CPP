/*
2.WAP to check how multiple inheritance works.
Try to access members of Parent from Child class.
Check ambiguity when multiple Parents contain same member.*/
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
		cout<<"\nIn parent2";
	}
};
class Child:public Parent1,public Parent2
{
	public:
		Child()
		{
			cout<<"\nIn child";
		}
};
int main()
{
	Child obj;
	


 	return 0;
}


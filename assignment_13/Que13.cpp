/*Q8.WAP to understand the diamond problem.*/
#include<iostream>
using namespace std;

class Grand
{
	public:
		Grand()
		{
			cout<<"\nIn grand()";
		}	
};
class Parent1:public Grand
{
	public:
		Parent1()
		{
			cout<<"\nIn parent1()";
		}
		
};
class Parent2:public Grand
{
	public:
		Parent2()
		{
			cout<<"\nIn parent2()";
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


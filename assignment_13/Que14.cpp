/*Q9.WAP to understand constructor execution in multiple and multilevel inheritance.
Use private and protected keywords for inheritance.
Check the destructor execution also.
*/
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
class Parent:public Grand
{
	public:
		Parent()
		{
			cout<<"\nIn parent1()";
		}
		
};

class Child:public Parent
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


#include<iostream>
using namespace std;

class Parent
{
	public:
		virtual void show()
		{
			cout<<"In parent show()";
		}
};
class Child:public Parent
{
	public:
		void show()
		{
			cout<<"In child show()";
		}
};
int main()
{
	Parent obj,*p;
	Child var;
	p=&obj;
	p->show();
	p=&var;
	p->show();
	
	


 	return 0;
}


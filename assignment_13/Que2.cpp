#include<iostream>
using namespace std;
class Parent
{
	public:
		virtual void show()
		{
			cout<<"\nIn parent show()";
		}
};
class Child:public Parent
{
	public:
		void show()
		{
			cout<<"\nIn Child show()";
		}
};
int main()
{
	Parent obj;
	Child var;
	Parent *p;
	p=&obj;
	p->show();
	
	p=&var;
	p->show();

 	return 0;
}


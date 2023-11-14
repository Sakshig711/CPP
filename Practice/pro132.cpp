#include<iostream>
using namespace std;
class Parent
{
	public:
		void show()
		{
			cout<<"\nIn Parent show()";
		}
};
class Child:public Parent
{
	public:
		void show()
		{
			cout<<"\nIn child show";
		}
		
};
int main()
{
	Parent *p;
	p = new Parent();
	p->show();
	
	p = new Child();
	p->show();


 	return 0;
}


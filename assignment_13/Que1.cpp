/*Q1.WAP to check compiletime polymorphism.Use runtime objects.Refer notebook.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		void show()
		{
			cout<<"In show()";
		}
};
int main()
{
	Number *p;
	p = new Number();
	p->show();


 	return 0;
}


#include<iostream>
using namespace std;
class Number
{
	public:
		void show()
		{
			cout<<"\nIn show()";
		}
		void show(int a)
		{
			cout<<"\nIn para show()";
		}
};
int main()
{
	Number obj;
	obj.show(10);
	
	Number *p;
	p = new Number();
	p->show();


 	return 0;
}


#include<iostream>
using namespace std;
class Number
{
	public:
	int x,y;
		Number()
		{
			x=7;
			y=4;
			cout<<"In default";
		}
		Number(int a,int b)
		{
			cout<<"\nIn paramtrz";
			cout<<"\n"<<a<<" "<<b;
		}
		void show()
		{
			cout<<"\n"<<x<<" "<<y;
		}
};
int main()
{
	Number *p;
	p = new Number();
	p->show();
	
	Number *q;
	q = new Number(10,20);
	//q->show();


 	return 0;
}


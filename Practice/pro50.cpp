#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
		
	public:
		void scan()
		{
			cout<<"Enter x and y = ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	Number T1,T2;
	Number *p;
	p=&T1;
	p->scan();
	p=&T2;
	p->scan();
	p=&T1;
	p->print();
	p=&T2;
	p->print();


 	return 0;
}


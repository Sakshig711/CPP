#include<iostream>
using namespace std;
class Number
{
	int x,y;
	public:
		void scan()
		{
			cin>>x>>y;
		}
		void show()
		{
			cout<<x<<" "<<y;
		}
};
int main()
{
	Number *p;
	p=new Number();
	
	p->scan();
	p->show();


 	return 0;
}


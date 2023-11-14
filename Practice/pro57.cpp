#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		
		void set(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void show()
		{
			cout<<x<<"  "<<y;
		}
};
int main()
{
	Number T;
	Number *p;
	p=&T;
	T.set(5,7);
	p->show();

 	return 0;
}


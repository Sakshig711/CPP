#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
};
int main()
{
	Number T1,T2;
	Number *p;
	p=&T1;
	cout<<(*p).x;


 	return 0;
}


#include<iostream>
using namespace std;
class Number
{
	public: 
		int x,y;
};
int main()
{
	Number *p;
	p= new Number();
	
	p->x=56;
	p->y=87;
	
	cout<<p->x<<" "<<p->y;
 	return 0;
}
/*56 87*/


#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		
		void set(int x,int y)
		{
			Number obj;
			this=&obj
		}
	
};
int main()
{
	Number T;
	Number *p;
	p=&T;
	T.set(5,7);
	

 	return 0;
}


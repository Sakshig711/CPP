#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void myfun(int x, int y)
		{
			x=x;
			y=y;
			
		}
		void show()
		{
			cout<<x<<" "<<y;
		}
};
int main()
{	
	Number obj;
	obj.myfun(3,8);
	obj.show();


 	return 0;
}


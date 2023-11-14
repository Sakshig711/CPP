/*Q10.WAP to understand this pointer.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void myfun(int x,int y)
		{
			x=x;
			y=y;
			cout<<x<<" "<<y;
		}
};
int main()
{
	Number T1;
	T1.myfun(23,76);


 	return 0;
}


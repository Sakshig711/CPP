#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void set(int x,int y)
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
	Number T1;
	T1.set(34,65);


 	return 0;
}


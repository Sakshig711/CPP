#include<iostream>
using namespace std;
class Number
{
	public:
		int x,y;
		void operator++(int a)
		{
			cout<<x<<" "<<y<<endl;
			x++;
			y++;
		}
		void show()
		{
			cout<<x<<" "<<y;
		}
		
};
int main()
{
	Number T1={2,4};
	
	T1++;
	T1.show();


 	return 0;
}


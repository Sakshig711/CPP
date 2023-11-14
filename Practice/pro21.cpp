#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		int y;
		void show()
		{
			cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
			
		}
};
int main()
{
	Number T1,T2;
	T1.x=10;
	T1.y=20;
	
	T2.x=15;
	T2.y=25;
	
	T2.show();
	T1.show();

 	return 0;
}


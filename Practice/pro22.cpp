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
			x=23;
			y=45;
			
		}
};
int main()
{
	Number T2;
	
	T2.x=15;
	T2.y=25;
	
	T2.show();
	cout<<T2.x<<"\n"<<T2.y;
	

 	return 0;
}


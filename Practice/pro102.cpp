#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number operator~()
		{
			Number temp;
			temp.x=+x;
			temp.y=+y;
			return temp;
		}
};
int main()
{
	Number T1={2,3};
	Number T2;
	
	T2=~T1;
	cout<<T2.x<<" "<<T2.y;
	
	

 	return 0;
}


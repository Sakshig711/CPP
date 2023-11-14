#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		Number(int a,int b)
		{
			x=a;
			y=b;
		}
		Number(Number &temp)
		{
			x=temp.x+temp.y;
			y=temp.x-temp.y;
		}
};
int main()
{
	Number T1(5,10);
	Number T2=T1;
	cout<<T2.x<<" "<<T2.y;
	T2=T1;
	cout<<endl<<T2.x<<" "<<T2.y;

 	return 0;
}


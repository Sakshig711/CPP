#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		void show()
		{
			cout<<"\n"<<x<<" "<<y;
		}
		friend Number operator-(Number temp);
};
Number operator+(Number temp1,Number temp2)
{
	Number ans;
	ans.x=temp1.x+temp2.x;
	ans.y=temp1.y+temp2.y;
	return ans;
}
int main()
{
	Number T1={4,7};
	Number T2={3,9};
	Number T3;
	T3=T2+T1;
	T1.show();
	T2.show();
	T3.show();


 	return 0;
}


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
Number operator-(Number temp)
{
	Number ans;
	ans.x=-temp.x;
	ans.y=-temp.y;
	return ans;
}
int main()
{
	Number T1={4,7};
	Number T2={3,9};
	T2=-T1;
	T1.show();
	T2.show();


 	return 0;
}


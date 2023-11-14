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
		
};
Number operator+(Number temp,int a)
{
	Number ans;
	ans.x=temp.x+a;
	ans.y=temp.y+a;
	return ans;
}
int main()
{
	Number T1={5,8};
	Number T2;
	
	T2=T1+5;
	T1.show();
	T2.show();


 	return 0;
}


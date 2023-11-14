#include<iostream>
using namespace std;
class Number
{
	int x,y;
	public:
		Number()
		{
			
		}
		Number(int a)
		{
			
		}
		Number(int a,int b)
		{
			x=a;
			y=b;
		}
		Number operator++()
		{
			Number ans;
			ans.x=x++;
			ans.y=y++;
			return ans;
		}
		void show()
		{
			cout<<"\n"<<x<<" "<<y;
		}
		Number operator+(Number temp)
		{
			Number ans(0);
			ans.x=x+temp.x;
			ans.y=y+temp.y;
			return ans;
		}
		Number operator-(Number temp)
		{
			Number ans(0);
			ans.x=x-temp.x;
			ans.y=y-temp.y;
			return ans;
		}
		Number operator~()
		{
			Number ans(0);
			ans.x=~x;
			ans.y=~y;
			return ans;
		}
		
};


int main()
{
	Number T1(3,6),T2(5,9),T3(2,9),T4;
	T4 = ++T1;
	T4.show();
	T4 = T1 - T2 + T3;
	T4.show();
	T4 = ~T3; //bitwise complement.
	T4.show();// will print ~T3.x and ~ T3.y
}



#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		Number()
		{
			cout<<"Enter x and y for T2 = ";
			cin>>x>>y;
		}
		Number(int a)
		{
			
		}
		Number(int a,int b)
		{
			x=a;
			y=b;
			
		}
		Number operator+(Number temp)
		{
			Number ans(1);
			ans.x=x+temp.x;
			ans.y=y+temp.y;
			return ans;
		}
		Number operator*(Number temp)
		{
			Number ans(1);
			ans.x=x*temp.x;
			ans.y=y*temp.y;
			return ans;
		}
		void show()
		{
			cout<<"\n"<<x<<" "<<y;
		}
};
int main()
{
	Number T1(5,6),T2,T3(7,8);
	Number T4(1);
	
	T4=T1+T2+T3;
	T4.show();
	T4=T1+5;
	T4.show();
	T4=T1*T2+T3;
	T4.show();

 	return 0;
}


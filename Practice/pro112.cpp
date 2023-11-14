#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
	Number()
		{
			cout<<"Enter x and y = ";
			cin>>x>>y;
		}

		Number(int a,int b)
		{
				
		}	
		Number(int a)
		{
			
		}
		void show()
		{
			cout<<"\n"<<x<<" "<<y;
		}
		void operator++(int a)
		{
			cout<<x<<" "<<y<<endl;
			x++;
			y++;
		}
		Number operator+(Number temp)
		{
			Number ans(1);
			ans.x=x+temp.x;
			ans.y=y+temp.y;
			return ans;
		}
};
int main()
{
	Number T1,T2,T3(0,0);
	T1++;
	T1.show();
	T3=T1+T2;

	T3.show();
 	return 0;
}


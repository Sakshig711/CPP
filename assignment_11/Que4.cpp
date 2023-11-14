/*Q4.Complete the code for following main() function.
*/
#include<iostream>
using namespace std;
class Number
{
	int x,y;
	public:
		void show()
		{
			cout<<"\n"<<x<<" "<<y;
		}
		friend Number operator-(Number temp);
		Number(int a,int b)
		{
			x=a;
			y=b;
		}
		Number()
		{
			
		}
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
	Number T1(3,7);
	Number T2;
	T2 = -T1;
	T1.show();// should print 3,7
	T2.show();// should print -3,-7
}



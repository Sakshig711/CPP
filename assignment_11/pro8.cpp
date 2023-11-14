/*Q8.Complete the program for following main() function.
Do not use operator overloading.Write code which is necessary to implement
statements written in comment.
*/
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
		Number(int a)
		{
			
		}
		Number convert(Number temp)
		{
			Number ans(0);
			ans.x=x+temp.x;
			ans.y=y+temp.y;
			return ans;
		}
		Number convert2(Number temp)
		{
			Number ans(0);
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
	Number T1,T2,T3,T4,T5(0);
	//T5 = T1 + T2;
	T5=T1.convert(T2);
	T5.show();
	//T5 = T1 + T2 + T3;
	T5=T5.convert(T3);
	T5.show();
	//T5 = T1+T2+T3+T4;
	T5=T5.convert(T4);
	T5.show();
	//T5 = T1+T2*T3;
	T5=T1.convert(T2);
	T5=T5.convert2(T3);
	T5.show();	
	
}


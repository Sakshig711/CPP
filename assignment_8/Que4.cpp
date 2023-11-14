/*Q4.Complete the code given below.
Do not change main() function.
*/
#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
		static void scan(Number &T1);
		static void print(Number T1);
		void scan(Number T2)
		{
			cout<<"Enter the x and y = ";
			cin>>T2.x>>T2.y;
		}
		void print(Number T2)
		{
			cout<<T2.x<<" "<<T2.y;
		}
};
void Number::scan(Number &T1)
{
	cout<<"Enter the x and y = ";
	cin>>T1.x>>T1.y;
}
void Number::print(Number T1)
{
	cout<<T1.x<<" "<<T1.y;
}
int main()
{
	Number T1,T2;
	Number::scan(T1);
	scan(T2);

	print(T1);
	Number::print(T2);
}


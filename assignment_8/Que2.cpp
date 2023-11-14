/*Q2.*/
#include<iostream>
using namespace std;


class Number
{
	private:
		int x,y;
	public:
		//friend int main();
		static Number add(Number T1,Number T2);
		void scan()
		{
			cout<<"Enter the x and y = ";
			cin>>x>>y;
		}
		void print()
		{
			cout<<"addition of x = "<<x<<"\n"<<"Addition of y = "<<y;
		}
		
};
Number Number::add(Number T1,Number T2)
		{
			Number obj;
			obj.x=T1.x+T2.x;
			obj.y=T1.y+T2.y;
			return obj;
		}
int main()
{
	Number T1,T2,T3;
	T1.scan();
	T2.scan();
	T3 = Number::add(T1,T2);
	T3.print();
	//Perform T3 = T1+T2;
}


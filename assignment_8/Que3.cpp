#include<iostream>
using namespace std;

class Number
{
	private:
		int x,y;
	public:
		static void scan(Number &T1);
		static void print(Number T3);
		static Number add(Number T1,Number T2);
};
void Number::scan(Number &T1)
{
	cout<<"Enter the x and y = ";
	cin>>T1.x>>T1.y;
}
Number Number::add(Number T1,Number T2)
{
	Number obj;
	obj.x=T1.x+T2.x;
	obj.y=T1.y+T2.y;
	return obj;
}
void Number::print(Number T3)
{
	cout<<"addition of x = "<<T3.x<<"\n"<<"Addition of y = "<<T3.y;
}
int main()
{
	Number T1,T2,T3;
	Number::scan(T1);
	Number::scan(T2);
	T3 = Number::add(T1,T2);
	Number::print(T3);
	//Perform T3 = T1+T2;
}


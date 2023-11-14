#include<iostream>
using namespace std;
class Digit;
class Number
{
	public:
		Number(int a);
		
};
class Digit
{
	int d;
	friend Number::Number(int a);
};

Number::Number(int a)
{
	Digit obj;
	obj.d = 10;
	cout<<obj.d;
}
int main()
{
	Number num(13);
}


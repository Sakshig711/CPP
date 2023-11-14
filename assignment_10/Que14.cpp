/*WAP to make destructor of one class a friend of another class.*/
#include<iostream>
using namespace std;
class Digit;
class Number
{
	public:
		~Number();
		
};
class Digit
{
	public:
	int d;
	friend Number::Number();
};

Number::~Number()
{
	Digit obj;
	obj.d = 10;
	cout<<obj.d;
}
int main()
{
	{
		Number obj;
	}
	
	cout<<"Main end";
	return 0;
}


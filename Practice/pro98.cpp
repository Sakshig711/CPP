/*destructor as a friend of another class*/
#include<iostream>
using namespace std;
class Digit
{
	public:
		~Digit();
};
class Number
{
	int x;
	friend class Digit;
};
Digit::~Digit()
{
	Number var;
	var.x=10;
	cout<<var.x;
	
}
int main()
{
	{
		Digit obj;
	}
	cout<<"\nmain ends";
	
 	return 0;
}


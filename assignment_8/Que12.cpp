
#include<iostream>
using namespace std;
class Digit;
class Number
{
	int x;
};
class Digit
{
	private:
		void scan()
		{
			//create object of number.
			//scan and print data of this object
		}
	public:
		void show()
		{
			cout<<x;
		}
};
int main()
{
	Digit var;
	Number obj;
	Digit::Number::obj.show();
	return 0;
}


#include<iostream>
using namespace std;

class Number
{
	private:
		Number()
		{
			cout<<"In constructor";
		}
};
int main()
{
	Number obj;
	
 	return 0;
}


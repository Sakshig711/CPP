#include<iostream>
using namespace std;

class Number
{
	public:
		Number()
		{
			cout<<"\nIn degault constructor ";
		}
		Number(int a)
		{
			cout<<"\nIn parameterized constructor ";
		}
};
int main()
{
	Number obj;
	Number var(7);
	
 	return 0;
}

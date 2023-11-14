/*Q8.WAP to understand default and parameterized constructor.Perform some experiments.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		Number()
		{
			cout<<"in default";
		}
		Number(int a)
		{
			cout<<"In paramtrz";
		}
};
int main()
{
	Number obj;
	Number var(8);


 	return 0;
}


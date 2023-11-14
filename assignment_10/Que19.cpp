/*19.WAP to understand static members.(static member functions and static data members)*/
#include<iostream>
using namespace std;
class Number
{
	public: 
		int x;
		static void show();
};
void Number::show()
{
	cout<<"In static";
}
int main()
{
	Number obj;
	Number::show();
	

 	return 0;
}


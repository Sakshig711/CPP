#include<iostream>
using namespace std;
class Number
{
	public:
		int n;
		
		class Digit
		{
			public:
			int d;
		};
		Digit var;
		
};
int main()
{
	Number obj;
	
	obj.n=10;
	cout<<obj.n<<endl;
	
	obj.var.d=34;
	cout<<obj.var.d;

 	return 0;
}


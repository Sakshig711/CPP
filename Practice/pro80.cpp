#include<iostream>
using namespace std;
class Number
{
	private:
		int x,y;
		Number()
		{
			cout<<"In default";
		}
		Number(int a,int b)
		{
			cout<<"in paramtrz";
		}
		friend int main();
};
int main()
{
	Number obj;

 	return 0;
}


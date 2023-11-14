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
		
};
int main()
{
	Number obj;

 	return 0;
}


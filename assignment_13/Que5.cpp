/*Q5.WAP to check working of initialization list.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x,y;
		
		Number(int a,int b): x(a),y(b)
		{
			cout<<x<<" "<<y;
		}
};
int main()
{
	Number obj(4,7);



 	return 0;
}


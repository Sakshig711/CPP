/*WAP to understand working of initialization list.*/
#include<iostream>
using namespace std;
class Random
{
	public:
		int x,y;
		Random(int a,int b): x(a),y(b)
		{
			cout<<"\n x = "<<x<<" y = "<<y;
		}
		
};
int main()
{
	Random obj(45,87);

 	return 0;
}


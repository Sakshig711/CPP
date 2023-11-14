#include<iostream>
using namespace std;
class Grand
{
	public:
		Grand()
		{
			cout<<"\nIn def Grand()";
		}
};
class Super:public Grand
{
	public:
		Super()
		{
			cout<<"\nIn def Super()";
		}
};
class Derived:public Super
{
	public:
		Derived()
		{
			cout<<"\nIn def Derived()";
		}
		
	
};
int main()
{
	Derived obj;


 	return 0;
}


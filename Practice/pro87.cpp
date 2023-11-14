#include<iostream>
using namespace std;
class Number
{
	public:
		Number()
		{
			cout<<"\nIn contructor";
		}
		~Number()
		{
			cout<<"\nIn destructor";
		}
};
int main()
{
	{
		Number obj;
	}
	cout<<"\nmain ends";
	
	

 	return 0;
}


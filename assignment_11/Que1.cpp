/*Q1.WAP to explain constructor and destructor for runtime objects.*/
#include<iostream>
using namespace std;

class Number
{
	public:
		int x;
		Number()
		{
			cout<<"In constructor";
		}
		~Number()
		{
			cout<<"\nIn distructor";
		}
};
int main()
{
	Number *p;
	p = new Number();
	
	delete p; 

 	return 0;
}


/*15.WAP to check the sequence of execution of constructor and destructor
when multiple objects go out of scope.Use inner scopes also.*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x;
		Number(int a)
		{
			x=a;
			cout<<"\nIn constructor"<<x;
		}
		~Number()
		{
			cout<<"\nIn destructor"<<x;
		}
};
int main()
{
	Number obj(1);
	Number var(2);
	


 	return 0;
}


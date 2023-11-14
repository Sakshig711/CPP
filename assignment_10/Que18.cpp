/*18.WAP to understand constant member functions.
*/
#include<iostream>
using namespace std;
class Number
{
	public:
		int x;
		void show()const
		{
			cout<<"In const";
		}
}


int main()
{
	Number obj;
	obj.show();

 	return 0;
}

